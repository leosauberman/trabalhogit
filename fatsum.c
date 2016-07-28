#include <stdio.h>

long long int fat(long long int n)
{	
	if(n == 1 || n == 0)return 1;
	return n*fat(n-1);	
}

int main()
{
	long long int n;
	long long int m;
	long long int fatsum;
	scanf("%lli", &n);
	printf("Fatorial de n: %lli\n", fat(n));
	
	scanf("%lli", &m);
	printf("Fatorial de m: %lli\n", fat(m));
	
	fatsum= fat(n) + fat(m);
	printf("Soma fatorial: %lli\n", fatsum);
	return 0;
}
