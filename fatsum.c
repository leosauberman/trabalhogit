#include <stdio.h>

int fat(int n)
{	
	int fatorial;
	while(n >= 1)
	{
		fatorial= n*n-1;
		n-=1;
	}
	return fatorial;
}
