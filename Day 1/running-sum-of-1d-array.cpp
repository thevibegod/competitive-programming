// https://leetcode.com/problems/running-sum-of-1d-array/

// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
// Return the running sum of nums.

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(auto i=nums.begin()+1;i!=nums.end();i++){
            *i = (*i) + *(i-1);
        }
        return nums;
    }
};