class CfgPatches
{
  class division7_scorpion_m808b
  {
    author = "Division-7";
    url = "https://discord.gg/c2BgeFMgqk";
    units[] = {};
    weapons[] = {};
    magazines[] = {};
    ammo[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"division7_vehicles"};
  };
};

class CfgVehicles
{
  class OPTRE_M808B_UNSC;

  class DIV7_M808B_UNSC_Titan : OPTRE_M808B_UNSC
  {
    scope = 2;
    faction = "DIV7_UNSC";
    displayName = "[DIV7] M808B Scorpion MBT [Titan]";
    hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6", "camo7"};
    hiddenSelectionsTextures[] = {"division7_vehicles\scorpion\M808B\_textures\div7_scorp_lopo_titan_co.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_tur_wood_co.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\det_3_co.paa", "division7_vehicles\scorpion\M808B\_textures\div7_scorp_decals_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\mine_roller_co.paa"};
  };

  class DIV7_M808BM_Hellwalker : DIV7_M808B_UNSC_Titan
  {
    displayName = "[DIV7] M808BM Scorpion MBT [Hellwalker]";
    hiddenSelectionsTextures[] = {"division7_vehicles\scorpion\M808B\_textures\div7_scorp_lopo_hellwalker_co.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_tur_wood_co.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\det_3_co.paa", "division7_vehicles\scorpion\M808B\_textures\div7_scorp_decals_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\mine_roller_co.paa"};
  };
  class DIV7_M808BM_Divine_Intervention : DIV7_M808B_UNSC_Titan
  {
    displayName = "[DIV7] M808BM Scorpion MBT [Intervention]";
    hiddenSelectionsTextures[] = {"division7_vehicles\scorpion\M808B\_textures\div7_scorp_lopo_divineintervention_co.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_tur_wood_co.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\det_3_co.paa", "division7_vehicles\scorpion\M808B\_textures\div7_scorp_decals_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\mine_roller_co.paa"};
  };
  class DIV7_M808BM_Arcadia : DIV7_M808B_UNSC_Titan
  {
    displayName = "[DIV7] M808BM Scorpion MBT [Arcadia]";
    hiddenSelectionsTextures[] = {"division7_vehicles\scorpion\M808B\_textures\div7_scorp_lopo_arcadia_co.paa", "division7_vehicles\scorpion\M808B\_textures\div7_scorp_tur_wood_arcadia_co.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\det_3_co.paa", "division7_vehicles\scorpion\M808B\_textures\div7_scorp_decals_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\mine_roller_co.paa"};
  };
  class DIV7_M808BM_Kursk : DIV7_M808B_UNSC_Titan
  {
    displayName = "[DIV7] M808BM Scorpion MBT [Kursk]";
    hiddenSelectionsTextures[] = {"division7_vehicles\scorpion\M808B\_textures\div7_scorp_lopo_kursk_co.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_tur_wood_co.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\det_3_co.paa", "division7_vehicles\scorpion\M808B\_textures\div7_scorp_decals_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\mine_roller_co.paa"};
  };
  class DIV7_M808BM_Sheila : DIV7_M808B_UNSC_Titan
  {
    displayName = "[DIV7] M808BM Scorpion MBT [Sheila]";
    hiddenSelectionsTextures[] = {"division7_vehicles\scorpion\M808B\_textures\div7_scorp_lopo_sheila_co.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_tur_wood_co.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\det_3_co.paa", "division7_vehicles\scorpion\M808B\_textures\div7_scorp_decals_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\scorp_net_wood_ca.paa", "OPTRE_Vehicles_Tracked\Scorpion\data\texture\mine_roller_co.paa"};
  };
};
