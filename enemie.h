#ifndef ENEMIE_H	//Checks if ENEMIE_H is not defined
#define ENEMIE_H	//if not then it defines ENEMIE_H as the following header file
					//the purpose is so that double definitions do not occur due to header being included more than once.
					
#include <iostream>
#include <string>

class Enemie
{
	private:
		string	enemie_name;
		int		enemie_health;
		int		enemie_loot;
		int		enemie_exp;
		
	public:
		//Constructors
		Enemie ();
		Enemie (string name, int health, int loot, int exp);
		//Getters
		string 	GetName();
		int 	GetHealth();
		int 	GetLoot();
		int 	GetExp();
		//Setters
		void 	SetName(string name);
		void	SetHealth(int health);
		void	SetLoot(int loot);
		void	SetExp(int exp);
};//END Enemie class 

#endif		//For the definition condition