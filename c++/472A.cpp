#include <stdio.h>
#include <stdlib.h>
#include <math.h>
bool isPrime(int n)
{
	int flag = 1;
	if(n == 1) return 1;
	for(int i = 2; i <= sqrt(n) && flag == 1; i ++)
	{
		if(n%i == 0) flag = 0;
	}
	if(flag) return 1;
	else return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 4; i <= n/2;i ++)
	{
		if(!isPrime(i) && !isPrime(n-i))
		{
			printf("%d %d\n", i, n-i);
			break;
		}
	}
	return 0;
}
