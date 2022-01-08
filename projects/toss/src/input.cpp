#include<iostream>
#include<string>

int inputFromUser(int value, std::string what) 
{
	// This function takes input from user

	std::cout << "  Enter " << what << ": " ;
	std::cin >> value ;

	return value;
}
