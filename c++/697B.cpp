#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str[200];
char a[200], b[200], c[5], s[200];
int main()
{
	int k1=0, k2=0, d = 0;
	scanf("%s", str);
	int len = strlen(str);
	a[0] = str[0];
	for(int i = 2; i < len; i++)
	{
		if(str[i] != 'e')
		{
			b[k1++] = str[i];
		}
		else if(str[i] == 'e'){
			for(int j = i+1; j < len; j++)
			{
				c[k2++] = str[j];
			}
			break;
		}
	}
	//得到指数 
	d = c[0]-'0';
	for(int j = 1; j < k2; j++)
	{
		d = d*10 + (c[j]-'0');
	}
	int k3 = 1;
	while(d-k1 > 0)
	{
		b[k1++] = '0'; 
	}
	for(int i =0; i < d;i++)
	{
		a[k3++] = b[i]; 
	} 
	//去掉前导0
	int flag = -1; 
	for(int i = 0; i < k3; i++)
	{
		if(a[i] != '0')
		{
			flag = i;
			break;
		}
	}
	int k4 = 0;
	if(flag == -1)
	{
		s[0] = '0';
		s[1] = '\0';
	}
	else{
		for(int i = flag; i < d+1; i++)
		{
			s[k4++] = a[i];
		}
	}
	printf("%s", s);
	if(k1 == 1 && b[0] == '0')
	return 0;
	else if(k1 > d) 
	printf(".");
	for(int i = d; i < k1; i++)
	{
		printf("%c", b[i]);
	}
	return 0;
}
