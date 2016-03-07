#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
char str[50][10];
int main()
{
	long long n, p;
	cin>>n>>p;
	for(int i = 0; i < n; i++)
	{
		scanf("%s",str[i]);
	}
	long long temp=0, ans = 0;
	if(str[n-1][4] == 'p')
	{
		temp = 1;
		ans++;
		for(int i = n-2; i >= 0; i--)
		{
			if(str[i][4] == 'p')
			{
				temp = (temp+0.5)*2;
				ans++;
			}
			else
			{
				temp = temp*2;
			} 
		}
	}
    cout<<temp*p-ans*(p/2)<<endl;
	return 0;
}
