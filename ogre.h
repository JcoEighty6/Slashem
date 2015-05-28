#ifndef OGRE_H	//Checks if OGRE_H is not defined
#define OGRE_H	//if not then it defines OGRE_H as the following header file
				//the purpose is so that double definitions do not occur due to header being included more than once.
					
#include <iostream>
#include <string>

class Ogre : public Enemie
{		
	public:
		//Constructors
		Ogre ();
		Ogre (string name, int health, int loot, int exp); //Maybe used for instantiating a special ogre (like a boss).
		
};//END Ogre class 

#endif		//For the definition condition