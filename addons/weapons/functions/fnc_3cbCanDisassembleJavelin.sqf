#include "script_component.hpp"
/*
    Author:
        Tim Beswick

    Description:
        Return if javelin can be disassembled

    Parameters:
        None

    Return value:
        Boolean
*/

alive ACE_player && {"UK3CB_BAF_Javelin_Launcher" isEqualTo (secondaryWeapon ACE_player)}
