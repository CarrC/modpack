#include "script_component.hpp"
/*
    Author:
        Tim Beswick

    Description:
        Can use toggle caching context action

    Parameter(s):
        0: Action Parameters

    Return Value:
        Boolean
*/
params ["", "_selectedObjects", "_selectedGroups", "", "", "_hoveredEntity"];

if (!isNull _hoveredEntity && {_hoveredEntity isKindOf "CAManBase" && {alive _hoveredEntity}}) exitWith {
    true
};

if (!(_selectedObjects isEqualTo [])) exitWith {
    ({
        if (({alive _x} count (units _x)) > 0) then {
            true
        } else {
            false
        };
    } count (_selectedObjects select {_x isKindOf "CAManBase" && {alive _x}})) > 0
};

if (!(_selectedGroups isEqualTo [])) exitWith {
    ({({alive _x} count (units _x)) > 0} count _selectedGroups) > 0
};

false
