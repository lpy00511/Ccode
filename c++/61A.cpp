#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char str1[101], str2[101], str3[101];
	int a[101];
	scanf("%s", str1);
	scanf("%s", str2);
	int len = strlen(str1);
	for(int i = len-1; i >= 0; i --)
	{
		a[i] = ((str1[i]-'0')^(str2[i]-'0'));
		str3[i] = a[i]+'0';
	}
	str3[len] = '\0';
	printf("%s\n", str3);
	return 0;
}
