#include "script_component.hpp"
/*
    Author:
        Tim Beswick

    Description:
        Toggles allow unconcious on AI (ACE variable "ace_medical_enableUnconsciousnessAI")

    Parameter(s):
        0: The module logic <OBJECT>

    Return Value:
        None
*/

params ["_logic"];

if (!local _logic) exitWith {};

private _object = attachedTo _logic;

switch (true) do {
    case (isNull _object || {!(_object isKindOf "CAManBase")}): {
        ["Place on a unit"] call ace_zeus_fnc_showMessage;
    };
    case (isPlayer _object): {
        ["Unit must be AI"] call ace_zeus_fnc_showMessage;
    };
    case (!(alive _object)): {
        ["Unit must be alive"] call ace_zeus_fnc_showMessage;
    };
    default {
        private _state = _object getVariable ["ace_medical_enableUnconsciousnessAI", ace_medical_enableUnconsciousnessAI];
        if (_state != 2) then {
            if (_state isEqualTo 0) then {
                _object setVariable ["ace_medical_enableUnconsciousnessAI", 1, true];
                ["Unit unconciousness set to '50/50'"] call ace_common_fnc_displayTextStructured;
            } else {
                _object setVariable ["ace_medical_enableUnconsciousnessAI", 0, true];
                ["Unit unconciousness set to 'Disabled'"] call ace_common_fnc_displayTextStructured;
            };
        };
    };
};

deleteVehicle _logic;
