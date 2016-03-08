#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int x, step = 0;
	scanf("%d", &x);
	if(x <= 5)
	step = 1;
	else if(x % 5 == 0)
	step = x/5;
	else 
	step = x/5+1;
	printf("%d\n", step);
	return 0;
 } 
