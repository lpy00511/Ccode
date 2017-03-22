#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int a[10005],dp[10005];
int main(){
	int n;
	while(scanf("%d", &n), n != 0){
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
			dp[i] = a[i];
		}
		int flag = 0;
		for(int j = 1; j <= n; j ++){
			if(a[j] >= 0){
				flag = 1;
				break;
			}
		}
		if(!flag){
			printf("%d %d %d\n", 0, a[1], a[n]);
		}
		else {
			int maxinum = -1;
			for(int i = 1; i <= n; i++){
				dp[i] = max(dp[i], dp[i-1]+a[i]);
				maxinum = max(maxinum, dp[i]);
			}
			int start = 0, end = 0;
			for(int i =1; i <= n; i++){
				if(dp[i] == maxinum){
					end = i;
					break;
				}
			}
			if(maxinum == 0){
				start = end;
			}
			else {
				for(int j = end; j > 0; j--){
				if(dp[j] <= 0){
					start = j+1;
					break;
				}
				else start = j;
				}
			}
			printf("%d %d %d\n", maxinum, a[start], a[end]);
		}
	}
	return 0;
}
/* 陆牛的代码。。。。。
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int a[10005],dp[10005],w[10005];
int main(){
	int n;
	while(scanf("%d", &n), n != 0){
		for(int i = 1; i <= n; i++){
			scanf("%d", &a[i]);
			dp[i] = a[i];
			w[i] = i;
		}
		int end=1;
		int maxx = a[1];
		for(int i = 2; i<= n;i++){
			if(dp[i-1]>=0){
				dp[i] = dp[i-1]+a[i];
				w[i] = w[i-1];
			}
			if(maxx < dp[i]){
				maxx = dp[i];
				end = i;
			}
			
		}
		if(maxx < 0)
			printf("0 %d %d\n",a[1],a[n]);
		else
			printf("%d %d %d\n",maxx,a[w[end]],a[end]);
		
		
	}
	return 0;
}

*/