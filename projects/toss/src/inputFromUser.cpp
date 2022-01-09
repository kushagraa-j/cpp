#include<iostream>
#include<string>
#include"headers/debug.hpp"

void instructions()
{
	std::cout << "\n"
		     "  This program provides you with a functionality of doing a toss digitally"
		     "\n"
		     "\n"
		     "  To choose Heads: 0"
		     "\n"
		     "  To choose Tails: 1"
		     "\n" 
		     "\n" ;

}

int inputFromUser(int value, std::string what) 
{
		#ifdef DEBUG
			std::cout << "  Entered inputFromUser();\n";
		#endif

	std::cout << "  Enter " << what << ": " ;
	std::cin >> value ;

		#ifdef DEBUG
			std::cout << "  Value from user:" << value << "\n" ;
		#endif

	if (value != 0 && value != 1) 
	{
		std::cout << "  Invalid Input" ;
		std::cout << "\n" ;
		std::cout << "\n" ;
		return value;
	}
	
	else
	{
		return value;
	}
		
}
