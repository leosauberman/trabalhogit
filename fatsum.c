#include <stdio.h>

long long int fat(long long int n)
{	
	if(n == 0 || n == 1)return 1;
	return n*fat(n-1);	
}
