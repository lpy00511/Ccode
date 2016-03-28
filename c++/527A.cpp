#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	__int64 a, b, ans = 0;
	scanf("%I64d %I64d", &a, &b);
	if(a == 1 || b == 1)
	{
		printf("%I64d\n", max(a,b)); 
	} 
	return 0;
} 
