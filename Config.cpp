class CfgPatches
{
	class Addon_name
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			""  
		};
	};
};
class CfgMods
{
	class Addon_name
	{
		dir="Addon_name";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Addon_name";
		credits=""; 
		author="";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		/*class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Addon_name/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Addon_name/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Addon_name/scripts/5_mission"
				};
			};
		};*/
	};
};
class CfgVehicles
{

};

