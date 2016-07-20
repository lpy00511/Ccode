#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int a[105], d;
	scanf("%d", &d);
	for(int i = 0; i < d;i++)
	{
		scanf("%d", &a[i]);
	}
	int maxSum = 0;
	for(int i = 0; i < d; i++)
	{
		int thisSum = 0;
		for(int j = i; j < d; j++)
		{
			thisSum += a[j];
			if(thisSum > maxSum)
			maxSum = thisSum;
		}
	}
	printf("%d\n", maxSum);
	return 0;
}
