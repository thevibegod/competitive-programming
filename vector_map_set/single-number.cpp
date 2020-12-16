// https://leetcode.com/problems/single-number/

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int> &nums) {
    unordered_map<int, int> data;
    for (auto i = nums.begin(); i != nums.end(); i++) {
        if (data.find(*i) == data.end()) {
            data[*i] = 1;
        } else {
            data[*i] = data.find(*i)->second + 1;
        }
    }
    for (auto &x: data) {
        if (x.second == 1) {
            return x.first;
        }
    }
    return -1;
    }
    
};