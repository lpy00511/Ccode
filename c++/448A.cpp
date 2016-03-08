#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main()
{
	int n, k1 = 0, k2 = 0, a[5], b[5], sum1 = 0, sum2 = 0;
    for(int i = 0; i < 3; i ++)
    {
    	scanf("%d", &a[i]);
    	sum1+= a[i];
	}
	for(int i = 0; i < 3; i++)
	{
		scanf("%d", &b[i]);
		sum2 += b[i];
	}
	scanf("%d", &n);
	if(sum1 % 5 == 0)
	k1 = sum1/5;
	else k1 = sum1/5+1;
	if(sum2 % 10 == 0)
	k2 = sum2/10;
	else k2 = sum2/10+1;
	if(k1 + k2 > n)
	printf("NO\n");
	else printf("YES\n");
	return 0;
 } 
