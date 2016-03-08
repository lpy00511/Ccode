#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
long long max_x(long long x, long long y)
{
	return x >y?x:y;
}
int main()
{
	long long n, a, b, c, ans;
	cin>>n>>a>>b>>c;
	if(n >= b)
	{
		ans = (n-((n-b)/(b-c)+1)*(b-c))/a+ (n-b)/(b-c)+1;
	}
	cout<<max_x(n/a,ans)<<endl;
	return 0;
}


	/*
	if(n >= a && n >= b)
	{
		long long n1 = n-a;
		long long n2 = n-b+c;
		cout<<n1<<n2;
		ans ++; 
		if(n1 >= n2)
		{
			while(n1 >= a)
			{
				ans ++;
				n1 = n1-a;
			}
			while(n1 >= b)
			{
				ans++;
				n1 = n1-b+c;
			}
		}
		else if(n2 > n1)
		{
			while(n2 >= b)
			{
				ans ++;
				n2 = n2-b+c;
			}
			while(n2 >= a)
			{
				ans ++;
				n2 = n2-a;
			}
		}
	}
	else if(n >= a && n < b)
	{
		while(n >= a)
		{
			n= n-a;
			ans++;
		}
	}
	else if(n < a & n >= b)
	{
		while(n >= b)
		{
			n = n-b+c;
			ans++;
		}
	}
	else if(n < a && n < b)
	{
		ans = 0;
	}
	printf("%d\n", ans);

	return 0;
}	*/
