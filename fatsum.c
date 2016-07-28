#include <stdio.h>

long long int fat(long long int n)
{	
	if(n == 0 || n == 1)return 1;
	return n*fat(n-1);	
}

int main()
{
	int n;
	int m;
	int fatsum;
	scanf("%d", n);
	scanf("%d", m);
	fatsum= fat(n) + fat(m);
	printf("%d\n", fatsum);
	return 0;
}
