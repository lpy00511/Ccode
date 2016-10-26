//师兄 2016/10/25 10:21:53
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char str[10000];
int main()
{
	int n;
	char temp[1024];
	while(scanf("%d", &n) != EOF){
		scanf("%s",str);
		int ans1 = 0,ans2 = 0;
		int front = 0,len = strlen(str);
		int inBlock;//是否在括号里 0:不在  非0 :在
		for(int i = 0;i <= len;i++){
			if(i == len||str[i] == '('||str[i] == ')'||str[i] == '_'){
				temp[front] = 0;
				if(front > 0){
					if(inBlock <= 0){
						ans1 = ans1>front?ans1:front;
					}
					else{
						ans2++;
					}
				}
				front = 0;
				if(str[i] == '(')
					inBlock++;
				if(str[i] == ')')
					inBlock--;
			}
			else
				temp[front++] = str[i];
		}
		printf("%d %d\n",ans1,ans2);
	}
	

	return 0;
 } 
