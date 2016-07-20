#include<iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	double s, t, x;
	double y1, y2;
	while(scanf("%lf%lf%lf", &s, &t, &x)!= EOF)
	{
		if(x == s)
		printf("YES\n");
		else{
			y1 = (x-s)/t;
			y2 = (x-s-1)/t;
			int a = int(y1);
			int b = int(y2);
			if(a < 1)
			printf("NO\n");
		    else{
		    	if((a == y1) || (b == y2))
		    	printf("YES\n");
		    	else printf("NO\n");
			}
		}
	}
	return 0;
 } 
 
