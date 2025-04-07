Here is an example of a DayZ SQF script for a Boar with bear-like AI:

```sqf
class CfgVehicles {
	class Animal_Base;
	class Animal_Bear: Animal_Base {
		scope = 2;
		displayName = "Boar";
		model = "\DZ\animals\boar\data\boar.p3d";
		aiAgentTemplate = "Animal_Bear";
		aiAgentType = "Boar_AI";
		aiAgentRadius = 0.3;
		aiAgentHeight = 1.2;
		aiAgentType = "Boar_AI";
		class EventHandlers {
			init = "(_this select 0) setVariable ['cfgAIPackages', ['Boar_AI']];";
		};
	};
	
	class Boar_AI: Bear_Base_AI {
		scope = 0;
		aggroRange = 50;
		moveSpeed = 0.5;
		attackSpeed = 2;
		attackDamage = 200;
	};
};
```

Please note that this is just a basic example and may need to be adjusted and tested further to fit your specific needs and preferences in the game.
