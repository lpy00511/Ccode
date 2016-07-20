#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
 	__int64 n, m, ans = 0, i, j;
 	scanf("%I64d%I64d", &n, &m);
 	for(i = 1; i <= n; i++)
 	{
 		ans += (i+m)/5 - i/5;
	}
	printf("%I64d\n", ans);
 	return 0;
}
