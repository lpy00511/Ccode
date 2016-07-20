#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[1000];
int main()
{
	int n, key, i, j;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(j = 2; j <= n; j++)
	{
		key = a[j];
		i = j-1;  //i=1
		while(i > 0 && a[i] > key)
		{
			a[i+1] = a[i];   //目的是将所有满足a[i]>key 的元素向右移位 
			i = i-1;  
		}
		a[i+1] = key;
	}
	for(i = 1; i <= n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
} 


