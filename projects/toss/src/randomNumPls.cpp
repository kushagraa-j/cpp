#include<cstdlib>
#include<time.h>
#include"headers/debug.hpp"

	#ifdef DEBUG
		#include<iostream>
	#endif

int randomNumPls()
{
		#ifdef DEBUG
			std::cout << "\n  Entered randomNumPls();\n";
		#endif

	srand (time(0));	
	int num {rand() % 2};

		#ifdef DEBUG
			std::cout << "  Random Number:" << num << "\n";
			std::cout << "  Exited randomNumPls();\n\n";
		#endif

	return num;
}
