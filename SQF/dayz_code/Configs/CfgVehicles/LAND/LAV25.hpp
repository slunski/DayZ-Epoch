class LAV25;
class LAV25_DZ: LAV25 {
	scope = public;
	side = TGuerrila;
	displayName = "LAV-25 DZ";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	TransportMagazines[] = {};

	transportMaxMagazines = 100; // Default: 100
	transportMaxWeapons = 10; // Default: 10
	//transportmaxbackpacks = ; // Default:

	class Turrets;
	class MainTurret;
	class CommanderOptics;
};
class LAV25_HQ;
class LAV25_HQ_DZ: LAV25_HQ {
	scope = public;
	side = TGuerrila;
	displayName = "LAV-25 (HQ) DZ";

	commanderCanSee = 2+16+32;
	gunnerCanSee = 2+16+32;
	driverCanSee = 2+16+32;

	crew = "";
	typicalCargo[] = {};
	TransportMagazines[] = {};

	transportMaxMagazines = 100; // Default: 100
	transportMaxWeapons = 10; // Default: 10
	//transportmaxbackpacks = ; // Default:

	class Turrets;
	class MainTurret;
};

// Ammo Less
class LAV25_DZE: LAV25_DZ {
	displayName = "LAV-25 AL";
	class Turrets: Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
		class Turrets: Turrets {
			class CommanderOptics: CommanderOptics {
				magazines[] = {};
			};
		};
	};
};
class LAV25_HQ_DZE: LAV25_HQ_DZ {
	displayName = "LAV-25 (HQ) AL";
	class Turrets: Turrets {
		class MainTurret : MainTurret {
			magazines[] = {};
		};
	};
};