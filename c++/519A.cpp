#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[10]={0}, b[10] ={0};
int main()
{
	char str[10][10];
	for(int i = 0; i < 8; i++)
	{
		scanf("%s", str[i]);
	}
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if(str[i][j] == 'Q' )
			a[0]++;
			else if(str[i][j] == 'R')
			a[1]++;
			else if(str[i][j] == 'B')
			a[2]++;
			else if(str[i][j] == 'N')
			a[3]++;
			else if(str[i][j] == 'P')
			a[4]++;
			else if(str[i][j] == 'q')
			b[0]++;
			else if(str[i][j] == 'r')
			b[1]++;
			else if(str[i][j] == 'b')
			b[2]++;
			else if(str[i][j] == 'n')
			b[3]++;
			else if(str[i][j] == 'p')
			b[4]++;
		}
	}
	int sum1 = 0, sum2 = 0;
    sum1 += a[0]*9+a[1]*5+a[2]*3+a[3]*3+a[4]*1;
	sum2 += b[0]*9+b[1]*5+b[2]*3+b[3]*3+b[4]*1;
	if(sum1 > sum2)
	printf("White\n");
	else if(sum1 == sum2)
	printf("Draw\n");
	else printf("Black\n");
	return 0;
 } 

