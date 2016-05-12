#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int d[5], s;
	for(int i = 0; i < 3; i++)
	scanf("%d", &d[i]);
	s = 0;
	sort(d, d+3);
	if(d[0]+d[1] >= d[2])
	{
		s = d[0]+d[1]+d[2];
	}
	else
	{
		s = 2*(d[0]+d[1]);
	}
	printf("%d\n", s);
	return 0;
 } 
