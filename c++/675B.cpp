#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, a, b, c, d, x_min, x_max, ans=0;
	scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);
	x_min = 1-a+d;
	if(x_min < 0) 
	x_min = 1;
	x_max = n-a+d;
	//printf("%d %d\n", x_min, x_max);
	if((1-a-b+c+d )> x_min)
	x_min = 1-a-b+c+d;
	if((n-a-b+c+d) < x_max)
	x_max = n-a-b+c+d;
	if((1-b+c) > x_min)
	x_min = 1-b+c;
	if((n-b+c) < x_max)
	x_max = n-b+c;
	ans = x_max-x_min+1;
	//printf("%d %d %d\n", x_min, x_max,ans);
	printf("%d\n", n*ans);
	return 0;
 } 

