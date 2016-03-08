#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int c, sum = 0;
	int n = 5;
	while(n--)
	{
		scanf("%d", &c);
		sum+=c;
	}
	if(sum % 5 == 0 && sum != 0)  
	printf("%d\n", sum/5);
	else printf("-1\n");
	return 0;
}
