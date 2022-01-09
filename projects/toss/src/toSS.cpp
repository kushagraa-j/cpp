#include<iostream>
#include"main.hpp"

int main()
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
	
	int userChoice {inputFromUser(userChoice , "your choice")};
	int faceOfCoin {randomNumPls()};

	std::cout << "\n" ;
	result(faceOfCoin,userChoice);
	std::cout << "\n" ;
	std::cout << "\n" ;
	
	return 0;
}
