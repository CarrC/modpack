#include "script_component.hpp"
/*
    Author:
        Tim Beswick

    Description:
        Toggles the side rleation between Indep and Blufor

    Parameter(s):
        0: The module logic <OBJECT>

    Return Value:
        None
*/

#define SIDES [west,east,independent]

params ["_logic"];

if (!local _logic) exitWith {};

private _sides = parseSimpleArray (getText (configFile >> "CfgVehicles" >> typeOf _logic >> QGVAR(sides)));
_sides params ["_side1", "_side2"];
_side1 = SIDES#_side1;
_side2 = SIDES#_side2;

private _message = "%1 is now FRIENDLY to %2";
private _value = if ((_side1 getFriend _side2) < 0.6) then {
    1 // Is enemy, set friend
} else {
    _message = "%1 is now HOSTILE to %2";
    0 // Is friend, set enemy
};
[QEGVAR(common,setSideRelation), [_side1, _side2, _value]] call CBA_fnc_serverEvent;
[QEGVAR(common,setSideRelation), [_side2, _side1, _value]] call CBA_fnc_serverEvent;
[format [_message, _side1, _side2]] call ace_common_fnc_displayTextStructured;

deleteVehicle _logic;
