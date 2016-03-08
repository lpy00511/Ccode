#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int a[5], x[5];
	for(int i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < 3; i++)
	{
		scanf("%d", &x[i]);
	}
	int temp = 0, sum = 0, ans = 0;
	for(int j = 0; j < 3; j++)
	{
		 temp = a[j]-x[j];
		 if(temp > 0)
		 {
		 	sum += temp/2;
		 }
		 else {
		 	ans += temp;
		 }
	}
	if(sum+ans>=0)
	printf("Yes\n");
	else printf("No\n");
	return 0;
} 
