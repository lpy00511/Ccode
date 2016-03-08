#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int a[55], num[55];
int fmin(int a, int b)
{
	return a>b?b:a;
}
int main()
{
	int n, m, min_x , max_x , min_n = 1001; 
	scanf("%d%d", &n, &m);
	for(int i = 0; i < m; i ++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a+m);
	for(int i = 0; i <= m-n; i++){
		min_x = 1001, max_x = 0;
		for(int j = i; j < i+n; j++)
		{
			if(a[j] > max_x)
			max_x = a[j];
			if(a[j] < min_x)
			min_x = a[j];
		//	printf("%d ", a[j]); 
		}
		num[i] = max_x-min_x;
	//	printf("%d ", num[i]);
		min_n = fmin(min_n, num[i]);
	}
	printf("%d\n", min_n);
	return 0;
}
