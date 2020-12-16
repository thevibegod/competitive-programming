// https://leetcode.com/problems/arranging-coins/submissions/

// You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.
// Given n, find the total number of full staircase rows that can be formed.
// n is a non-negative integer and fits within the range of a 32-bit signed integer.

#include <math.h>

class Solution {
public:
    int arrangeCoins(int n) {
       double num = n;
       double determinant = sqrt((1 + (4*2*num)));
       return (-1 + determinant)/2;
    }
};