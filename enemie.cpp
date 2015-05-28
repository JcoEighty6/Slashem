#include "enemie.h"

//{Constructors

//This is the default constructor.
Enemie::Enemie()
{
	enemie_name 	= "bob";
	enemie_health 	= 100;
	enemie_loot		= 0;
	enemie_exp		= 0;
}

//This is an overloaded constructor which allows for custom characteristics.
Enemie::Enemie(string name, int health, int loot, int exp)
{
	enemie_name		= name;
	enemie_health	= health;
	enemie_loot		= loot;
	enemie_exp		= exp;
}

//}

//{Getters

string Enemie::GetName()
{
	return enemie_name;
}

int Enemie::GetHealth()
{
	return enemie_health;
}

int Enemie::GetLoot()
{
	return enemie_loot;
}

int Enemie::GetExp()
{
	return enemie_exp;
}

//}

//{Setters

void Enemie::SetName(string name)
{
	enemie_name = name;
}

void Enemie::SetHealth(int health)
{
	enemie_health = health;
}

void Enemie::SetLoot(int loot)
{
	enemie_loot = loot;
}

void Enemie::SetExp(int exp)
{
	enemie_exp = exp;
}

//}

