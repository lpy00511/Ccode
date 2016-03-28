#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[10];
int main()
{
	int t, flag1=0,flag2=0,flag3=0;
	for(int i = 0; i < 6; i++)
	{
		scanf("%d", &t);
		a[t]++;
	}
	for(int i = 1; i <= 10; i++)
	{
		if(a[i] >= 4)
		{
			flag1 ++;
		}
		else if(a[i] == 1)
		{
			flag2++;
		}
		else if(a[i] == 2)
		{
			flag3++;
		}
	}
	if(flag1 == 0)
	printf("Alien");
	else if(flag1 == 1 && flag2 > 0)
	printf("Bear");
	else if((flag1 == 1 && flag2 == 0 && flag3 == 0 )||(flag1==1 && flag3 == 1))
	printf("Elephant");
	
	return 0;
}
