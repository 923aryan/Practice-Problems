#include<bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<float>& nums1, vector<float>& nums2) 
{
	vector<float>nums3(nums1.size()+nums2.size());
	merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums3.begin());
	sort(nums3.begin(), nums3.end());
	if(nums3.size() % 2 == 1)
	{
		return nums3[nums3.size()/2];
	}
	else
	{
	
		return (nums3[(nums3.size()/2) - 1] + nums3[nums3.size()/2])/2.0;
	} 
}


// for testing
int main()
{
	vector<float>nums1 = {1,1};
	vector<float>nums2 = {-1,-2,-3};
	
	cout<<findMedianSortedArrays(nums1, nums2);
	return 0;
}