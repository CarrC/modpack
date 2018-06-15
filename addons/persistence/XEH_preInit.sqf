#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

if (!isMultiplayer) exitWith {};

if (hasInterface) then {
    [QGVAR(initClient), {_this call FUNC(initClient)}] call CBA_fnc_addEventHandler;
    ["CAManBase", "respawn", {
        [_unit] call FUNC(addPersistenceActions);
    }, true, nil, true] call CBA_fnc_addClassEventHandler;
};

if (isServer) then {
    GVAR(enabled) = false;
    GVAR(key) = getMissionConfigValue ["persistenceKey", ""];
    TRACE_1("Key",GVAR(key));
    GVAR(enabled) = GVAR(key) != "";
    
    private _hash = profileNamespace getVariable [GVAR(key), []];
    TRACE_1("Saved data",_hash);
    GVAR(dataNamespace) = [_hash] call CBA_fnc_deserializeNamespace;
    if ((count (allVariables GVAR(dataNamespace))) > 0) then {
        private _world =  GVAR(dataNamespace) getVariable [QGVAR(world), ""];
        if (_world != worldName) then {
            ERROR_3("World for key %1 is %2 but expected %3",GVAR(key),_world,worldName);
            GVAR(enabled) = false;
        };
    } else {
        GVAR(dataNamespace) = call CBA_fnc_createNamespace;
    };

    call FUNC(initServer);
};

ADDON = true;
