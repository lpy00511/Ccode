#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int a[30005];
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 1; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int flag = 0;
	for(int i = 1; i < n; )
	{
		i = i+a[i];
		if(i == m)
		{
			flag = 1;
			break;
		}
	}
	if(flag)
	printf("YES\n");
	else printf("NO\n");
	return 0;
} 
