// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

// Given an array nums of integers, return how many of them contain an even number of digits.

#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int> &nums) {
    int count = 0;
    for (auto num:nums) {
        int digits = 0;
        int temp = num;
        while (temp != 0) {
            temp = temp / 10;
            digits++;
        }
        if (digits % 2 == 0) count++;
    }
    return count;
    }
};