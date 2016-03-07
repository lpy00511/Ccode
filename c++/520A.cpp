#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,flag = 0;
	int st[101]={0};
	cin>>n;
	string str;
	cin>>str;
	if(n < 26)
	cout<<"NO"<<endl;
	else {
		for(int i = 0; i < n; i ++)
		{
			if(str[i] == 'A' || str[i] == 'a')
			st[0]++;
			if(str[i] == 'B' || str[i] == 'b')
			st[1] ++;
			if(str[i] == 'C' || str[i] == 'c')
			st[2] ++;
			if(str[i] == 'D' || str[i] == 'd')
			st[3] ++;
			if(str[i] == 'E' || str[i] == 'e')
			st[4] ++;
			if(str[i] == 'F' || str[i] == 'f')
			st[5] ++;
			if(str[i] == 'G' || str[i] == 'g')
			st[6] ++;
			if(str[i] == 'H' || str[i] == 'h')
			st[7] ++;
			if(str[i] == 'I' || str[i] == 'i')
			st[8] ++;
			if(str[i] == 'J' || str[i] == 'j')
			st[9] ++;
			if(str[i] == 'K' || str[i] == 'k')
			st[10] ++;
			if(str[i] == 'L' || str[i] == 'l')
			st[11] ++;
			if(str[i] == 'M' || str[i] == 'm')
			st[12] ++;
			if(str[i] == 'N' || str[i] == 'n')
			st[13] ++;
			if(str[i] == 'O' || str[i] == 'o')
			st[14] ++;
			if(str[i] == 'P' || str[i] == 'p')
			st[15] ++;
			if(str[i] == 'Q' || str[i] == 'q')
			st[16] ++;
			if(str[i] == 'R' || str[i] == 'r')
			st[17] ++;
			if(str[i] == 'S' || str[i] == 's')
			st[18] ++;
			if(str[i] == 'T' || str[i] == 't')
			st[19] ++;
			if(str[i] == 'U' || str[i] == 'u')
			st[20] ++;
			if(str[i] == 'V' || str[i] == 'v')
			st[21] ++;
			if(str[i] == 'W' || str[i] == 'w')
			st[22] ++;
			if(str[i] == 'X' || str[i] == 'x')
			st[23] ++;
			if(str[i] == 'Y' || str[i] == 'y')
			st[24] ++;
			if(str[i] == 'Z' || str[i] == 'z')
			st[25] ++;
		}
		for(int i = 0; i < 26; i ++)
		{
			if(st[i] == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag)
		cout<<"NO"<<endl;
		else 
		cout<<"YES"<<endl;
	}
	return 0;
}
/*
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
#define M 110
typedef long long Int;
bool test(char *s,int t){
    for(int i = 0;i < strlen(s);i++){
        if(s[i] == 'a'+t||s[i] == 'A'+t)
            return true;
    }
    return false;
}
int main(){
    int n;
    char str[M];
    while(scanf("%d",&n) != EOF){
        scanf("%s",str);
        bool flag = true;
        for(int i =  0;i < 26;i++){
            if(test(str,i) == false){
                flag = false;
                break;
            }
        }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
#define M 110
typedef long long Int;

int main(){
    int n;
    char str[M];
    int num[M];
   // printf("%d %d\n",'a','A');
    while(scanf("%d",&n) != EOF){
        scanf("%s",str);
        memset(num,0,sizeof(num));
        for(int i = 0;i < n;i++){
            if(str[i] >= 'a'&&str[i]<='z')
                num[str[i]-'a']++;
            else
                num[str[i]-'A']++;
        }
        bool flag = true;
        for(int i = 0;i < 26;i++){
            if(num[i] == 0){
                flag = false;
                break;
            }
        }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
*/
