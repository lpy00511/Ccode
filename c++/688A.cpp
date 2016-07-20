#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str[105];
int a[105];
int sub_max(int x)
{
	int maxSum = 0, thisSum = 0;
	for(int i = 0; i < x; i++)
	{
		for(int j = i; j < x; j++)
		{
			thisSum += a[j];
			if(thisSum > maxSum)
			maxSum = thisSum;
		}
	}
	return maxSum;
}
int main()
{
	int n, d;
	scanf("%d%d", &n, &d);
	for(int i = 0; i < d; i++)
	{
		int flag = 1;
		scanf("%s", str);
		for(int j = 0; j < n; j++)
		{
			if(str[j] == '0')
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			a[i] = -100;
		}
		else a[i] = 1;
	}
	printf("%d\n", sub_max(d));
	return 0;
 } 
