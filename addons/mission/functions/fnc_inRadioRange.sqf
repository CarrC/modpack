#include "script_component.hpp"
/*
    Author:
        Tim Beswick

    Description:
        Checks if artillery is in communication range based on RTO, FO and mast types

    Parameters:
        0: Caller <OBJECT>
        1: Artillery <OBJECT>
        
    Return value:
        BOOLEAN
*/
params ["_caller", "_artillery"];

private _callerDistance = _caller distance2D _artillery;
private _maxArtilleryDistance = 0;
private _inRange = false;

if (_artillery isKindOf "StaticMortar") then {
    // Is mortar, check for base distance
    if (_callerDistance <= GVAR(artillerySupportBaseDistance)) then {
        _inRange = true;
    } else {
        // Try to communicate through RTO
        private _rtoUnits = (_caller nearEntities ["CAManBase", GVAR(artillerySupportBaseDistance)]) select {(backpack _x) in GVAR(artillerySupportRtoBackpacks)};
        private _index = _rtoUnits findIf {(_x distance2D _artillery) <= GVAR(artillerySupportRtoDistance)};

        if (_index != -1) then {
            _inRange = true;
        } else {
            // Try to communicate through RTO and mast, first check if any valid masts in range of artillery, then check if any rtos in range of those masts
            // We already have the rto units which are in range of the caller, so no need to get that again
            private _masts = nearestObjects [_artillery, GVAR(artillerySupportMastObjects), GVAR(artillerySupportMastDistance), true];
            if (!(_mast isEqualTo [])) then {
                _masts = _masts select {alive _x && {damage _x < 0.5}};
                _inRange = (_masts findIf {
                    private _mast = _x;
                    (_rtoUnits findIf {
                        (_x distance2D _mast) <= GVAR(artillerySupportRtoDistance)
                    }) != -1;
                }) != -1;
            };
        };
    };
} else {
    // Is not mortar, must be FO in range
    private _index = (_caller nearEntities ["CAManBase", GVAR(artillerySupportBaseDistance)]) findIf {(backpack _x) in GVAR(artillerySupportFoBackpacks)};
    if (_index != -1) then {
        _inRange = true;
    };
};

_inRange
