/*
    Author:
    	Tim Beswick

    Description:
    	Initialises spawning for given marker names

		Parameters for function call:
			0: Marker Name (default: "") <STRING>
			1: Max enemy groups spawned at once (default: 20) <SCALAR>
			2: Enemy pool size (default: 40) <SCALAR>
			3: Faction (default: "") <STRING>
			4: Debug (default: false) <BOOLEAN>

		Format: ["markername", maxCurrentGroups, poolSize, "Laraka", false] call UKSF_Mission_fnc_spawnOnMarker;
		Example: ["talibanArea", 30, 100, "Laraka", false] call UKSF_Mission_fnc_spawnOnMarker;

		Markers should be area markers. In editor: Markers > Areas (Circle overlapping rectangle icon)

		Faction options are:
			"Genfor"
			"Laraka"
			"Inegal"
		Giving something other than exactly these options will result in no units
*/
//EXAMPLE:
["area1", 5, 5, "Laraka", false] call UKSF_Mission_fnc_spawnOnMarker;
["area2", 6, 6, "Laraka", false] call UKSF_Mission_fnc_spawnOnMarker;