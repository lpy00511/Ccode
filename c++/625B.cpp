#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	char str1[100005];
	char str2[35];
	scanf("%s", str1);
	scanf("%s", str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if(len1 < len2)
	printf("0\n");
	else 
	{
		int ans = 0;
		for(int i = 0; i < len1; i++)
		{
			if(str1[i] == str2[0])
			{
				//printf("%d ", i);
				int j;
			    for(j = 0; j < len2; j++)
				{
					if(str1[i+j] != str2[j])
					{
						break;
					}
				}
				if(j == len2)
				{
					ans++;
					i = i+j-1;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
