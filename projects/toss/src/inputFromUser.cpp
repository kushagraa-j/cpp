#include<iostream>
#include<string>

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
		
	return value;
}
