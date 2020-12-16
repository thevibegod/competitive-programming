// https://leetcode.com/problems/binary-search/

// Given a sorted (in ascending order) integer array nums of n elements and a target value, write a function to search target in nums. If target exists, then return its index, otherwise return -1.

#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int> &nums, int target) {
    int low = 0, high = nums.size();
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
    }
};