/*
������㷨ʱ�临�Ӷ�Ϊn*log5(n) 
����ĿҪ��ʱ�临�Ӷ�ӦΪlog5(n) 
*/
#include <iostream>
#include <cstdio>
using namespace std;
int isDivide(int n)
{
	int t = 0;
	while(n>1)
	{
	    if(n % 5 != 0) break;
		else {
			n /= 5;
			t++;
		}
	}
	return t;
}
int main()
{
	int n,t = 0,f = 0;
	cin>>n;
	int ans = n % 5;
	for(int i = (n-ans); i>= 5; i-=5)
		{
			if(isDivide(i))
			{
				f += isDivide(i);
			}
			else f++;
			
		}
		cout<<f<<endl;
	return 0;
}

/*
�Ż��㷨��
 class Solution {
public:
    int trailingZeroes(int n) {
    int t = 0;
    while(n)
	{
	    t += (n / 5);
		n = n/5;
	}
	return t;
    }
}; ///�������� 
*/
 
