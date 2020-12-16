// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

// Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.
// For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. Notice that multiple kids can have the greatest number of candies.

#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
        int max = 0;
        vector<bool> output;
        for (auto i = candies.begin(); i != candies.end(); i++) {
            if (*i > max) {
                max = *i;
            }
        }
        for (auto i = candies.begin(); i != candies.end(); i++) {
            output.push_back(*i + extraCandies >= max);
        }
        return output;
    }
};