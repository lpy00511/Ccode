/*
下面的算法时间复杂度为n*log5(n) 
而题目要求时间复杂度应为log5(n) 
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
优化算法：
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
}; ///继续加油 
*/
 
