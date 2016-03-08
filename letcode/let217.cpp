#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int a[1000] = {0};
int main()
{
	int n;
	cin>>n;
	int f=0;
	for(int i = 0; i < n; i ++)
	{
		cin>>a[i];	
	}
	sort(a, a+n);
	for(int i = 0; i < n-1; i ++)
	{
		if(a[i] == a[i+1])
		{
			f++;
			break;
		}
	}
	if(f > 0) cout<<"true"<<endl;
	else cout<<"false"<<endl;
	return 0;
}

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    	int len = nums.size();
    	if(len < 2)
    		return false;
        std::sort(nums.begin(),nums.end());
        for(int i = 0; i < len; i ++)
        {
        	if(nums[i] == nums[i+1])
        	{
        		return true;
			}
		}
		return false;
    }
};
