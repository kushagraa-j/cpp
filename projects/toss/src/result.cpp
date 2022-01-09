#include<iostream>

void faceOfCoinInWords(int num){
	if (num == 0) {
		std::cout << "  It was Heads\n";	
	}

	else
	{
		std::cout << "  It was Tails\n";	
	}
}

void result(int faceOfCoin , int userChoice)
{
	if (userChoice != 0 && userChoice != 1) 
	{
		std::cout << "  Invalid Input" ;
	}
	
	else
	{
		if (faceOfCoin == userChoice) 
		{
			faceOfCoinInWords(faceOfCoin);
			std::cout << "  You Won!";
		}

		else
		{
			faceOfCoinInWords(faceOfCoin);
			std::cout << "  You lost!";
		}

	}

}
