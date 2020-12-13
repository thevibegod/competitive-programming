// https://leetcode.com/problems/fair-candy-swap/

// Alice and Bob have candy bars of different sizes: A[i] is the size of the i-th bar of candy that Alice has, and B[j] is the size of the j-th bar of candy that Bob has.
// Since they are friends, they would like to exchange one candy bar each so that after the exchange, they both have the same total amount of candy.  (The total amount of candy a person has is the sum of the sizes of candy bars they have.)
// Return an integer array ans where ans[0] is the size of the candy bar that Alice must exchange, and ans[1] is the size of the candy bar that Bob must exchange.
// If there are multiple answers, you may return any one of them.  It is guaranteed an answer exists.

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
vector<int> fairCandySwap(vector<int> &A, vector<int> &B) {
    vector<int> output;
    int a_count = 0, b_count = 0;
    unordered_set<int> data;
    for (auto b:B) {
        b_count = b_count + b;
        data.insert(b);
    }
    for (auto a:A) {
        a_count = a_count + a;
    }
    int difference = a_count - b_count;

    for (auto a:A) {
        if (data.find(a - difference/2) != data.end()) {
            output.push_back(a);
            output.push_back(a - difference/2);
            return output;
        }

    }
    return output;

    }

};