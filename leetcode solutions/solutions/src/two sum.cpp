//============================================================================
// Name        : solutions.cpp
// Author      : igamil
// Description : leetcode problems solutions
//============================================================================

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>out;
        map<int,int > mymap;
        int temp;
        for(int i=0;i<n;i++)
        {
        	temp = mymap[target-nums[i]];
            if(temp)
            {

                out.push_back(temp-1);
                out.push_back(i);
                break;
            }
            mymap[nums[i]]=i+1;
        }

        return out;
    }
};

int main() {
	Solution s = Solution();
	vector<int> nums{1,1,3};
	int target = 2;
	cout << s.twoSum(nums, target).size() << endl;
	return 0;
}
