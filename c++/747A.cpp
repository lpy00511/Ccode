#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int abs(int x)
{
	return x>0?x:-x;
}
int main()
{
	int n;
	int min_x=10000000;
	int a=0, b=0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		if(n%i == 0)
		{
			if(abs(n/i -i) < min_x)
			{
				min_x = abs(n/i-i);
				a = i; b = n/i;
			}
		}	
	}
	printf("%d %d\n", a, b);
	return 0;
}
