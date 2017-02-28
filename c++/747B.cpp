#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char str[256];
int main()
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		int a[5]={0};
		char s[256];
		char str1[4] = {'A','C','G','T'};
		scanf("%s", str);
		int len = strlen(str);
		int flag = 1, ans=0;
		if(n % 4 != 0)
		{
			flag = 0;
		}else {
			for(int i = 0; i < len;i++)
			{
				if(str[i] == 'A') a[0]++;
				else if(str[i] == 'C') a[1]++;
				else if(str[i] == 'G') a[2]++;
				else if(str[i] == 'T') a[3]++;
				else ans++;
			}
			int temp=0;
			for(int j = 0; j < 4;j++)
			{
				if(a[j] > n/4){
					flag = 0;
				}
				else{
					for(int x = 0; x < n/4-a[j]; x++)
					{
						s[temp++] = str1[j]; 
					}
				}
			}
			int k = 0;
			for(int i = 0; i < len; i++)
			{
				if(str[i] == '?'){
					str[i] = s[k];
					k++;
				}
			}	
		}
		if(flag == 0)
		{
			printf("===\n");
		}
		else {
			printf("%s\n", str);
		}
	}
	return 0;
}
