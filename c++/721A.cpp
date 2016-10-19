#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str[105];
int a[105] = {0};
int main()
{
	int n, k;
	scanf("%d", &n);
	scanf("%s", str);
	printf("%s\n", str);
	int len = strlen(str);
	k = 0;
	for(int i = 0; i < len; i++)
	{
		while(str[i] != 'W')
		{
			a[k]++;
		}
		//k++;
	}		
	printf("%d", k);	                                                                                                                 
	return 0;
}
