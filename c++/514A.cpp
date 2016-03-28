#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	char str[20];
	scanf("%s", str);
	int len = strlen(str);
	for(int i = 0; i < len; i++)
	{
		int ans = str[i]-'0';
		if(i == 0 && ans == 9)
		{
			continue;
		}
		else{
			if(ans > 9-ans)
			str[i] = (9-ans)+'0';
		}
	}
	printf("%s\n", str);
	return 0;
}
