#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str[10000];
int main()
{
	int n, k =1;
	char s[5];
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		sprintf(s, "%d", i);
		int len = strlen(s);
		for(int j = 0; j < len; j++)
		{
			str[k++] = s[j];
		}
	}
	str[k] ='\0';
	printf("%c\n", str[n]);
	return 0;
 } 
