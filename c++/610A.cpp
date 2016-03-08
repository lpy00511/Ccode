#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		if(n % 2 != 0)
		printf("0\n");
		else {
			if((n/2)%2 == 0)
			printf("%d\n", (n/2)/2-1);
			else printf("%d\n", (n/2)/2);
		}
	}
	return 0;
 } 
