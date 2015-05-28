#include "ogre.h"

//Default Constructor
Ogre::Ogre()
{
	string 	name	= "Ogre";
	int		health	= 100;
	int		loot	= 10;
	int		exp		= 10;

	//Since this class inherits from Enemie just use the setters.
	SetName(name);
	SetHealth(health);
	SetLoot(loot);
	SetExp(exp);
}

