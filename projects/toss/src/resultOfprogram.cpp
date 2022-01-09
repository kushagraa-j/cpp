#include<iostream>
#include"headers/debug.hpp"

void faceOfCoinInWords(int num){

		#ifdef DEBUG
			std::cout << "  Entered faceOfCoinInWords();\n" ;
		#endif

	if (num == 0) {
		std::cout << "  It was Heads\n";	
	}

	else
	{
		std::cout << "  It was Tails\n";	
	}

		#ifdef DEBUG
			std::cout << "  faceOfCoinInWords() ended;\n" ;
		#endif
}

void result(int faceOfCoin , int userChoice)
{
	std::cout << "\n" ;

		#ifdef DEBUG
			std::cout << "  Entered result();\n" ;
		#endif

	
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


		#ifdef DEBUG
			std::cout << "\n  result() ended;" ;
		#endif

	std::cout << "\n" ;
	std::cout << "\n" ;

}
