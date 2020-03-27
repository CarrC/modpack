#include "script_component.hpp"
/*
    Author:
        Tim Beswick

    Description:
        Adds module area to patrol blacklist

    Parameters:
        0: The module logic <OBJECT>

    Return value:
        Nothing
*/

(_this select 1) params ["_logic"];

if (!(local _logic)) exitWith {};

GVAR(patrolBlacklistAreas) pushBackUnique _logic;
