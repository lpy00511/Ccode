#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str[100005];
int a[100]={0};
int main()
{
	int n, ans=0;
	scanf("%d", &n);
	scanf("%s", str);
	if(n > 26)
	printf("-1\n");
	else {
		int len=strlen(str);
		for(int i = 0; i < len; i++)
		{
			a[str[i]-'a']++;
		}
		for(int i = 0; i < 30; i++)
		{
			if(a[i] >= 2)
			ans += (a[i] - 1);
		}
		printf("%d\n", ans);
	}
	return 0;
 } 
