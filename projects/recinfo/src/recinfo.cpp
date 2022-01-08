// Author: Kushagra
// File: recinfo.cpp
// Date: 31st Dec 

#include<iostream>

/* Functions */

void infoAboutRectangle(int l , int w);
int inputFromUser(int value, std::string what);


int main()
{
	std::cout << "\n   This program displays information about your rectangle when provided with\n" 

	int l { inputFromUser(l,"length") };
	int w { inputFromUser(w,"width") };

	infoAboutRectangle(l,w);

	return 0;
}
