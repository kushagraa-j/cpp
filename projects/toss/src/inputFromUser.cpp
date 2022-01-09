#include<iostream>
#include<string>

int inputFromUser(int value, std::string what) 
{
	std::cout << "  Enter " << what << ": " ;
	std::cin >> value ;

	return value;
}
