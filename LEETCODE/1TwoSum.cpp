#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>&nums, int target)
{
	vector<int>v;
	for (int i = 0; i < (int)nums.size(); ++i)
	{
		for (int j = i+1; j <= nums.size()-1; ++j)
		{
			if(nums[i] + nums[j] == target)
			{
				v.push_back(i);
				v.push_back(j);
				return v;
			}
		}
	}
	return v;
}

// for testing
int main()
{
	vector <int> nums = {3,2,4};
	int target = 6;
	vector<int>temp = twoSum(nums, target);
	for(auto e : temp)
		cout<<e<<" ";
	return 0;
}