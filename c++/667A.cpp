#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define PI 3.14159265358
int main()
{
	int d, h, v, e;
	scanf("%d%d%d%d", &d, &h, &v, &e);
	double s = (double)(PI * d * d)/4;
	double d1 =  (double)v/((double)(PI * d * d)/4);
	if(d1 <= e)
	printf("NO\n");
	else {
		double t = h/(d1-e);
		printf("YES\n");
		printf("%.12lf\n", t); 
	}
	return 0;
}
