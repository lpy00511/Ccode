#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int a[100005], dp[100005];
int main(){
	int n, m;
	scanf("%d", &n);
	for(int u = 1; u <= n; u++){
		scanf("%d", &m);
		for(int i = 0; i < m; i++){
			scanf("%d", &a[i]);
			dp[i] = a[i];
		}
		for(int i = 0; i < m; i++){
			dp[i] = dp[i-1]<0?a[i]:dp[i-1]+a[i];
		}
		int maximum=dp[0];
		int start, end1 = 0;
		for(int j = 1; j < m; j++){
			if(maximum < dp[j]){
				maximum = dp[j];
				end1 = j;
			}
		}
		start = end1;
		for(int k = end1; k >= 0; k--){
			if(dp[k] >= 0){
				start = k;
			}
			else break;
		}
		printf("Case %d:\n%d %d %d\n", u, maximum, start+1, end1+1);
		if(u != n)
			printf("\n");
	}
	return 0;
}