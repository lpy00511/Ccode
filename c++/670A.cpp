#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, min_n=0, max_n=0;
	scanf("%d", &n);
	if(n % 7 == 0)
	{
		min_n = max_n = (n/7)*2; 
	} 
	else {
		if(n % 7 == 1 | n%7==2)
		{
			max_n = 2*(n/7)+n%7;
			min_n = 2*(n/7);
		}
		else if(n%7 == 6)
		{
			min_n = 2*(n/7)+1;
			max_n = 2*(n/7)+2;
		}
		else {
			max_n = 2*(n/7)+2;
			min_n = 2*(n/7);
		} 
	}
	printf("%d %d\n", min_n, max_n);
	return 0;
 } 
