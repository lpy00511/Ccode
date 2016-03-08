#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,ans,f,flag = 0;
	cin>>n;
	for(int i = 2;i <= n; i++)
	{
		//ans = 0;
		if(n % i == 0 )
		while(i == n/i)
		{
			n = n/i;
			f = i;
			ans ++;
			cout<<n<<" ";
		}
		//else flag = 1;
	}
	//if(flag) 
//	cout<<"false"<<f<<ans;
	 cout<<"true"<<f<<ans+1;
	return 0;
}
