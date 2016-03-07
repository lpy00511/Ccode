#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
int GCD(int a, int b)
{
	while(b != 0)
	{
		int temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}
/*
int gcd(int a,int b){
   if(a <= 0)
      return b;
   return gcd(b%a,a);
}
*/
int main()
{
	int x, y, n, d;
	cin>>x>>y>>n;
	int flag = 0;
	while(n)
	{
		if(flag==0) 
		d = GCD(x,n);
		else d = GCD(y,n);
		n = n - d;
		flag ^= 1;
	}
	cout<<!flag<<endl;
	return 0;
}
