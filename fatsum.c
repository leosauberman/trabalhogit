#include <stdio.h>

int fat(int n)
{	
	int fatorial;
	for(n; n >= 1; n--)
	{
		n= n*n-1;
	}
	return fatorial;
}
