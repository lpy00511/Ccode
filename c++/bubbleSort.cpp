#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[100005];
int main()
{
	int n, swap;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	/*
		 ��a[0]��a[n-1]�ķ�Χ�ڣ�һ�αȽ���������Ԫ�ص�ֵ����a[j]>a[j+1],�򽻻���
		 ��������һ��ð�ݣ��Ͱ���N�������������ŵ�a[n-1]�С� 
	*/ 
	for(int i = 0; i < n-1; i++)
	{
		swap = 0;
		for(int j = 0; j < n - 1 - i; j++)
		{
			if(a[j] >= a[j+1])
			{
				swap = 1;
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		if(!swap) break;
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
 } 
