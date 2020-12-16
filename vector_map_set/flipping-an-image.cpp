// https://leetcode.com/problems/flipping-an-image/

// Given a binary matrix A, we want to flip the image horizontally, then invert it, and return the resulting image.
// To flip an image horizontally means that each row of the image is reversed.  For example, flipping [1, 1, 0] horizontally results in [0, 1, 1].
// To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0. For example, inverting [0, 1, 1] results in [1, 0, 0].

#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A) {
        vector<vector<int>> new_vector;
        for (auto row:A) {
            vector<int> new_row;
            reverse(row.begin(), row.end());
            new_row.reserve(row.size());
            for (auto val:row) {
                new_row.push_back(!val);
            }
            new_vector.push_back(new_row);
        }
        return new_vector;
    }
};