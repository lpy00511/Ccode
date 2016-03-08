#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int nums[1000];
	int numsSize;
	cin>>numsSize;
	for(int i =0; i < numsSize; i ++)
	{
		cin>>nums[i];
	}
	int min_n = nums[0];
	for(int i = 1; i < numsSize; i ++)
	{
		int t;
		if(nums[i] < min_n)
		{
			t = nums[i];
			nums[i] = min_n;
			min_n = t;
		}
	}
	for(int i =0; i < numsSize; i ++)
	{
		cout<<nums[i];
	}
	cout<<nums[numsSize/2+1]<<endl;
	return 0;
}
