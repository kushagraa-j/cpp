#include<iostream>
#include"headers/input.hpp"
#include"headers/random.hpp"
#include"headers/result.hpp" 
#include"headers/debug.hpp"

int main()
{

		#ifdef DEBUG
			std::cout << "\n  Entered main();" ;
		#endif

	instructions();

	int userChoice {inputFromUser(userChoice , "your choice")};
	int faceOfCoin {randomNumPls()};

	result(faceOfCoin,userChoice);

		#ifdef DEBUG
			std::cout << "  main() ended;\n\n" ;
		#endif
	
	return 0;
}
