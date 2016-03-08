#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,ans;
	cin>>n;
	for(int i = 2;i <= 1000; i ++)
	{
		ans = 0;
		while(n % i == 0)
		{
			n = n/i;
			ans ++;
		}
		break;
	}
	cout<<ans;
	return 0;
}
