#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	char str[105];
	int low=0, up=0;
	scanf("%s", str);
	int len = strlen(str);
	for(int i = 0;i < len; i++)
	{
		if(str[i] <= 'z'&& str[i]>='a')
		low++;
		else up++;
	}
	if(low >= up)
	{
		for(int i = 0;i < len; i++)
		{
			if(str[i] <= 'Z'&& str[i] >= 'A')
			str[i] = str[i]+32;
		}
	}
	else{
		for(int i = 0;i < len; i++)
		{
			if(str[i] <= 'z'&& str[i] >= 'a')
			str[i] = str[i]-32;
		}
	}
	printf("%s\n", str);
	return 0;
}
