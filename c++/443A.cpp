#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	char str[1005];
	int a[1005];
	memset(a, 0, sizeof(a));
    gets(str);
    int len = strlen(str);
    for(int i = 0; i < len; i++)
    {
    	if(str[i] >= 'a' && str[i] <= 'z')
    	{
    		a[str[i] - 'a']++;
		}
	}
	int ans = 0;
	for(int i = 0; i < 26; i++)
	{
		if(a[i] != 0)
		ans++;
	}
	printf("%d\n", ans);
	return 0;
}
