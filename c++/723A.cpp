#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[105];
int main()
{
    for(int i = 0; i < 3; i++)
    {
    	scanf("%d", &a[i]);
	}
	sort(a, a+3);
	int ans = 0;
	ans += ((a[1]-a[0])+(a[2]-a[1]));
	printf("%d\n", ans);
	return 0;
}
