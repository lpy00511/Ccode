#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
__int64 quyu(int *a, int x, int ax)
{
	__int64 sum = 0, t, i, j;
	for(i = 0; i < x; i++)
	{
		t = a[i];
		sum = sum*ax+t;
	}
	return sum;
}
int main()
{
	__int64 n, m, bx, by, sum1=0, sum2=0;
	int str1[15], str2[15];
	cin>>n>>bx;
	for(int i = 0; i < n; i++)
		cin>>str1[i];
	cin>>m>>by;
	for(int j = 0; j < m; j++)
    	cin>>str2[j];
    sum1 = quyu(str1, n, bx);
    sum2 = quyu(str2, m, by);
	if(sum1 == sum2)
    cout<<"="<<endl;
    else if(sum1<sum2)cout<<"<"<<endl;
    else cout<<">"<<endl;
    return 0;
 } 
