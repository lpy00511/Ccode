/*
	ģ��ͼ��� ����ʱ��ĸ��Ӷ� 
*/ 
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int a[100];
	int n, flag = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 1 && a[i+1] == 0)
		{
			flag = -1;
			break;
		}
		// ʱ�临�Ӷ�  O(n) 
		else
		{
			for(int j = 0; j < n; j++)
			{
				if(a[j] == 0 && a[j+n/2] ==1)
				{
					a[j] = 2, a[j+n/2] = 2;
				}
			}
		}
		// ʱ�临�Ӷ� O(n2) 
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 0 || a[i] == 1)
		flag = -1;
		else flag = 1;
	}
	// ʱ�临�Ӷ� O(n) 
	if(flag == -1)
	printf("NO\n");
	else printf("YES\n");
	return 0;
} 
