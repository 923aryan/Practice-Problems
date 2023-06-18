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

// //
//   9,9,9,9,9,9,9
//   0 0 0 9,9,9,9

// 1 0 0 0 9 9 9 8


  9 4 6 5
  0 9 4 2

1 0 4 0 7



// for testing
int main()
{
	
		cout<<18/10<<" ";
	return 0;
}