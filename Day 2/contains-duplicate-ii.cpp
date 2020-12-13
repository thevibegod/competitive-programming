// https://leetcode.com/problems/contains-duplicate-ii/

// Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
   bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int,int>data;
    for(int i=0;i<nums.size();i++){
        if(data.find(nums[i])!=data.end()){
            int old_index = data.find(nums[i])->second;
            if(i-old_index<=k) return true;
        }
        data[nums[i]] = i;
    }
    return false;
    }
};