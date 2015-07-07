class CfgPatches
{
	class ST11_Reskins
	{
		units[]=
		{
			
		};
		weapons[]={"ST11_HALO_Rebreather"};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};

class cfgVehicles 
	{
		class Bag_Base;
		class I_soldier_F;
		
		class ST11_AOR2 : I_soldier_F {
        scope = 2;
		side = 1;
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		
        displayName = "Uniform Test Soldier";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ST11_AOR2_Uniform"; //the uniform item
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"ST11_Uniforms\Textures\ST11_AOR2_co.paa"};        
    };
	
	class ST11_AOR1 : I_soldier_F {
        scope = 2;
		side = 1;
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		
        displayName = "Uniform Test Soldier AOR1";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ST11_AOR1_Uniform"; //the uniform item
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"ST11_Uniforms\Textures\ST11_AOR1_co.paa"};        
    };	
	class ST11_BDU : I_soldier_F {
        scope = 2;
		side = 1;
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		
        displayName = "Uniform Test Soldier BDU";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ST11_BDU_Uniform"; //the uniform item
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"ST11_Uniforms\Textures\ST11_BDU_co.paa"};        
    };	
	class ST11_ACU : I_soldier_F {
        scope = 2;
		side = 1;
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		
        displayName = "Uniform Test Soldier ACU";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ST11_ACU_Uniform"; //the uniform item
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"ST11_Uniforms\Textures\ST11_ACU_co.paa"};        
    };	
	class ST11_3ColorDes : I_soldier_F {
        scope = 2;
		side = 1;
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		
        displayName = "Uniform Test Soldier 3 Color Desert";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ST11_3ColorDes_Uniform"; //the uniform item
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"ST11_Uniforms\Textures\ST11_3ColorDes_co.paa"};        
    };	
	class ST11_6ColorDes : I_soldier_F {
        scope = 2;
		side = 1;
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		
        displayName = "Uniform Test Soldier 6 Color Desert";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ST11_6ColorDes_Uniform"; //the uniform item
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"ST11_Uniforms\Textures\ST11_6ColorDes_co.paa"};        
    };
	class ST11_NWU : I_soldier_F {
        scope = 2;
		side = 1;
		identityTypes[] = {"Head_NATO", "G_NATO_default"};
		
        displayName = "Uniform Test Soldier";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; //class for "naked" body
        uniformClass = "ST11_NWU_Uniform"; //the uniform item
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"ST11_Uniforms\Textures\ST11_NWU_co.paa"};        
    };
		
		class ST11_AOR1_Kitbag : Bag_Base
		{
		_generalMacro="ST11_AOR1_Kitbag";
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[]=
		{
			"ST11_Uniforms\Textures\ST11_Kitbag_AOR1_CO.paa"
		};
		displayName="Kitbag (AOR1)";
		scope=2;
		maximumLoad=350;
		passThrough=1;
		mass=4;
		};
		class ST11_NWU_Kitbag : Bag_Base
		{
		_generalMacro="ST11_NWU_Kitbag";
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[]=
		{
			"ST11_Uniforms\Textures\ST11_kitbag_NWU_co.paa"
		};
		displayName="Kitbag (NWU)";
		scope=2;
		maximumLoad=350;
		passThrough=1;
		mass=4;
		};
		class ST11_AOR1_Med_Kitbag : Bag_Base
		{
		_generalMacro="ST11_AOR1_Med_Kitbag";
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[]=
		{
			"ST11_Uniforms\Textures\ST11_Kitbag_AOR1_Med_CO.paa"
		};
		displayName="Kitbag Medical (AOR1)";
		scope=2;
		maximumLoad=350;
		passThrough=1;
		mass=4;
		};
		class ST11_AOR2_Kitbag : Bag_Base
		{
		_generalMacro="ST11_AOR2_Kitbag";
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[]=
		{
			"ST11_Uniforms\Textures\ST11_Kitbag_AOR2_CO.paa"
		};
		displayName="Kitbag (AOR2)";
		scope=2;
		maximumLoad=350;
		passThrough=1;
		mass=4;
		};
		class ST11_AOR2_Med_Kitbag : Bag_Base
		{
		_generalMacro="ST11_AOR2_Med_Kitbag";
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[]=
		{
			"ST11_Uniforms\Textures\ST11_Kitbag_AOR2_Med_CO.paa"
		};
		displayName="Kitbag Medical (AOR2)";
		scope=2;
		maximumLoad=350;
		passThrough=1;
		mass=4;
		};
		class ST11_Tan_Med_Kitbag : Bag_Base
		{
		_generalMacro="ST11_Tan_Med_Kitbag";
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[]=
		{
			"ST11_Uniforms\Textures\ST11_Kitbag_Tan_Med_CO.paa"
		};
		displayName="Kitbag Medical (Tan)";
		scope=2;
		maximumLoad=350;
		passThrough=1;
		mass=4;
		};
		class ST11_RGR_Med_Kitbag : Bag_Base
		{
		_generalMacro="ST11_RGR_Med_Kitbag";
		picture="\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[]=
		{
			"ST11_Uniforms\Textures\ST11_Kitbag_RGR_Med_CO.paa"
		};
		displayName="Kitbag Medical (RGR)";
		scope=2;
		maximumLoad=350;
		passThrough=1;
		mass=4;
		};
		
		
	};
	class cfgWeapons {
    class Uniform_Base;
    class UniformItem;
	class U_I_CombatUniform;
    
	
    class ST11_AOR2_Uniform : U_I_CombatUniform {
        scope = 2;
        displayName = "ST11 AOR2";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ST11_AOR2"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
        };
    };
	
	    class ST11_NWU_Uniform : U_I_CombatUniform {
        scope = 2;
        displayName = "ST11 NWU";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ST11_NWU"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
        };
    };
	
	class ST11_AOR1_Uniform : U_I_CombatUniform {
        scope = 2;
        displayName = "ST11 AOR1";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ST11_AOR1"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
        };
    };
	
	class ST11_BDU_Uniform : U_I_CombatUniform {
        scope = 2;
        displayName = "ST11 BDU";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ST11_BDU"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
        };
    };
	
	class ST11_ACU_Uniform : U_I_CombatUniform {
        scope = 2;
        displayName = "ST11 ACU";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ST11_ACU"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
        };
    };
	
	class ST11_3ColorDes_Uniform : U_I_CombatUniform {
        scope = 2;
        displayName = "ST11 3 Color Desert";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ST11_3ColorDes"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
        };
    };
	
	class ST11_6ColorDes_Uniform : U_I_CombatUniform {
        scope = 2;
        displayName = "ST11 6 Color Desert";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        
        class ItemInfo : UniformItem {
            uniformModel = "-";
            uniformClass = "ST11_6ColorDes"; //would be same as our made soldier class
            containerClass = "Supply20"; //how much it can carry
            mass = 80; //how much it weights
        };
    };
	
};