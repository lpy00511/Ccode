#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[100005];
int main()
{
	int n, swap;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	/*
		 在a[0]到a[n-1]的范围内，一次比较两个相邻元素的值，若a[j]>a[j+1],则交换；
		 经过这样一趟冒泡，就把这N个数中最大的数放到a[n-1]中。 
	*/ 
	for(int i = 0; i < n-1; i++)
	{
		swap = 0;
		for(int j = 0; j < n - 1 - i; j++)
		{
			if(a[j] >= a[j+1])
			{
				swap = 1;
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		if(!swap) break;
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
 } 
