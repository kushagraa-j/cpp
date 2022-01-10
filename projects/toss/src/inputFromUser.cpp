#include<iostream>
#include<string>
#include"headers/debug.hpp"

void instructions()
{
		#ifdef DEBUG
			std::cout << "\n\n  Entered instructions();\n\n";
		#endif

	std::cout << "\n"
		     "  This program provides you with a functionality of doing a toss digitally"
		     "\n"
		     "\n"
		     "  To choose Heads: 0"
		     "\n"
		     "  To choose Tails: 1"
		     "\n" 
		     "\n" ;

		#ifdef DEBUG
			std::cout << "  Exited instructions();\n";
		#endif
}

int inputFromUser(int value, std::string what) 
{
		#ifdef DEBUG
			std::cout << "\n  Entered inputFromUser();\n";
		#endif

	std::cout << "  Enter " << what << ": " ;
	std::cin >> value ;

		#ifdef DEBUG
			std::cout << "  Value from user:" << value << "\n" ;
		#endif

	if (value != 0 && value != 1) 
	{
		std::cout << "  Invalid Input" ;
	}

		#ifdef DEBUG
			std::cout << "\n  Exited inputFromUser();";
		#endif
	
	std::cout << "\n" ;
	return value;		
}
