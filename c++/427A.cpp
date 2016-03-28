#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n, sum, x, ans;
	scanf("%d", &n);
	sum = 0, ans = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &x);
		if(x == -1 && sum > 0)
		sum --;
		else if(x == -1 && sum == 0)
		ans ++;
		else if(x != -1)
		sum += x;
	}
	printf("%d", ans);
	return 0;
} 
