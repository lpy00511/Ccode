#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[100005];
int main()
{
	int n, a2=0, a5=0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]); 
	} 
	int flag = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 25)
		a2+=1;
		if(a[i] == 50)
		{
			if(a2 >= 1)
			{
				a2 -= 1;
				a5 += 1; 
			} 
			else{
				flag = 1;
				break;
			}
		}
		if(a[i] == 100)
		{
			if(a2 >= 1 && a5 >= 1)
			{
				a2 -= 1;
				a5 -= 1;	
			}
			else if(a2 >= 3)
			{
				a2 -= 3;
			}
			else{
				flag = 1; 
				break;
			}
		}
	}
	if(flag)
	printf("NO\n");
	else printf("YES\n");
	return 0;
}
