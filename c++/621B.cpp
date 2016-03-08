#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int num1[4000], num2[4000];
int  main()
{
	int n, x, y;
	scanf("%d", &n);
	int ans1 = 0, ans2=0;
	for(int i = 0; i < n; i ++)
	{
		scanf("%d %d", &x, &y);
		num1[x+y]++;
		num2[y-x+1000]++;
	}
	int ans = 0;
	for(int i = 0;i < 2000; i++)
	{
		if(num1[i] > 1)
		ans += (num1[i]*(num1[i]-1)/2);
		if(num2[i] > 1)
		ans += (num2[i]*(num2[i]-1)/2); 
	}
	printf("%d\n", ans);
	return 0;
}
