#include<cstdlib>
#include<time.h>

int randomNumPls()
{
	srand(time(0));	
	int num {rand() % 2};

	return num;
}
