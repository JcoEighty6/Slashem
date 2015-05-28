#ifndef TEMPLATE_H	//Checks if TEMPLATE_H is not defined
#define TEMPLATE_H	//if not then it defines TEMPLATE_H as the following header file
					//the purpose is so that double definitions do not occur due to header being included more than once.
					
#include <iostream> //this is for standard input and output streams like <cin> and <cout>.
#include <string>	//this is for the use of the data type sting and the various functions to perform operations on it.

class ClassName //Chose a class name. Also ":public [parent class name]" if you want this to be an child that inherits from the parent.  
{
	private:
		//Values can be set here if desired (such as some_int = 5).
		string		some_string;	//some variable
		int			some_int;		//another variable
		const char	A_CONST_CHAR;	//a constant
		
		//only members of the class can access things inside the private realm.
		
	public:
		
		ClassName (); //The default constructor is written like this with the same name as the class.
		ClassName (string str, int x); //An overloaded constructor which allows you to set the values while instantiating the object.
		
		//Other functions can be added which anyone can access since these are in the public realm.
		
};//END Template class 

#endif		//For the definition condition