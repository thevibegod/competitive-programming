// https://leetcode.com/problems/search-insert-position/

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

#include <vector>

using namespace std;

class Solution {
public:
int searchInsert(vector<int> &nums, int target) {
    int low = 0, high = nums.size()-1, mid = 0;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return nums[mid] > target ? mid : mid + 1;}
};