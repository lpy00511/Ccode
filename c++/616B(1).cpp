#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str[100005];
int a[100005];
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%s", str[i]);
			printf("%s ", str[i]);
		}
	 } 
	return 0;
}
