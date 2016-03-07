#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		if(n <= 5 || n > 2000000000)
		printf("%d\n", 0);
		else{	
		if((n/2)%2 == 0)
		{
			printf("%d\n", (n/2)/2-1);
		}
		else printf("%d\n", (n/2)/2);
	}
	}
	return 0;
} 
