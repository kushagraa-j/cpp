#include<string>
#include<iostream>

void result(int faceOfCoin , int userChoice)
{
	if (faceOfCoin == userChoice) 
	{
		std::cout << "  You Won!";
	}

	else
	{
		std::cout << "  You lost!";
	}
}
