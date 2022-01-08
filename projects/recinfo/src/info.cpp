#include<iostream>
#include<math.h>

void infoAboutRectangle(int l , int w)                               
{
	// This function provides Area, Perimeter and Diagnol of a rectangle
	
	std::cout << "\n";
	
	std::cout << "   Area:" << l*w << "\n";
	std::cout << "   Perimeter:" << 2*(l+w) << "\n";
	std::cout << "   Diagnol:" << sqrt( (l*l) + (w*w) ) << "\n";

	if (l==w) 
	{
		std::cout << "\n   Rectangle is a square, as l = w\n";	
	}

	std::cout << "\n";
}
