class CfgPatches
{
	class wil_ace_cpr
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.66;
		requiredAddons[] =
		{
			"ace_medical"
		};
		author[] =
		{
			"Willard"
		};
		authorUrl = "https://github.com/TheNiner/wil_ace_cpr";
	};
};

class Extended_PostInit_EventHandlers
{
    class wil_ace_cpr
    {
        init = "['wil_ace_cpr_fnc_treatmentAdvanced_CPRLocal', wil_ace_cpr_fnc_treatmentAdvanced_CPRLocal] call CBA_fnc_addEventHandler;";
    };
};

class CfgFunctions
{
	class wil_ace_cpr
	{
		class medical
		{
			file = "\wil_ace_cpr\functions";
			class treatmentAdvanced_CPR;
			class treatmentAdvanced_CPRLocal;
		};
	};
};

class ACE_Medical_Actions
{
	class Advanced
	{
		class CPR
		{
			callbackSuccess="wil_ace_cpr_fnc_treatmentAdvanced_CPR";
		};
	};
};