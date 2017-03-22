#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int flag[1010];
void info(int x, int minsize, int maxsize){
	for(int i = x*2; i <= min(x*10,maxsize); i++){
		flag[i] = 0;
	}
	for(int j = max((x+9)/10, minsize); j <= (x/2); j++){
		flag[j] = 0;
	}
}
int main(){
	int n, minSize, maxSize;
	int arr[55], brr[55];
	scanf("%d%d", &minSize, &maxSize);
	for(int i = 0; i <= 1000; i++){
		flag[i] = 1;
	}
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		info(arr[i], minSize,maxSize);
	}
	int ans = 0;
	for(int i = minSize; i <= maxSize; i++){
		if(flag[i])
			ans ++;
	}
	printf("%d\n", ans);
	return 0;
}