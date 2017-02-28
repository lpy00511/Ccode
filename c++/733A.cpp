#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str[105];
char str1[105];
int a[105]={0};
int main()
{
	scanf("%s", str);
	int len = strlen(str);
	int k = 0;
	for(int i = 0; i < len;i++)
	{
		if(str[i] == 'A' ||str[i] =='E'||str[i] =='I'||str[i] =='O'||str[i] =='U'||str[i] =='Y')
		{
			a[k++] = i+1;	
		}
	}
	int ans=0, max_n = a[0];
	a[k] = len+1;
	if(max_n == 0)
	{
		max_n = len+1;
	}
	else {
		for(int i = 0; i <= k; i++)
		{
		     ans = a[i+1]-a[i];
		     if(ans > max_n)
		     max_n = ans;
		}
	}
	printf("%d\n", max_n);
	return 0;
}
