// https://leetcode.com/problems/number-of-good-pairs/

// Given an array of integers nums.
// A pair (i,j) is called good if nums[i] == nums[j] and i < j.
// Return the number of good pairs.

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int> &nums) {
        unordered_map<int, int> data;
        int count = 0;
        for (int &num : nums) {
            if (data.find(num) != data.end()) {
                data[num]++;
            } else {
                data[num] = 1;
            }
        }
        for (auto val : data) {
            count += (val.second * (val.second - 1) / 2);
        }
        return count;
    }
};