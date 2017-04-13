#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
double w[10005], v[10005];
double dp[10005];
int main(){
	int n,m;
	while(scanf("%d%d", &n, &m) != EOF){
		if(n == 0 && m == 0)
			return 0;
		for(int i = 1; i <= m; i++){
			scanf("%lf%lf", &w[i], &v[i]);
		}
		for(int j = 1; j <= n; j++){
			dp[j] = 1.0;
		}
		for(int i = 1; i <= m; i++){
			for(int j = n; j >= 0; j--){
				if(j >= (int)w[i]){
                    dp[j] = min(dp[j], dp[j-(int)w[i]]*(1-v[i]));
                }
				//printf("%.2lf", dp[j]);
			}
			//printf("\n");
		}
		printf("%.1lf%%\n", (1-dp[n])*100);
	}
	return 0;
}