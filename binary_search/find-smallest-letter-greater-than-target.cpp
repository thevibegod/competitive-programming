// https://leetcode.com/problems/find-smallest-letter-greater-than-target/

// Given a list of sorted characters letters containing only lowercase letters, and given a target letter target, find the smallest element in the list that is larger than the given target.
// Letters also wrap around. For example, if the target is target = 'z' and letters = ['a', 'b'], the answer is 'a'.


#include <vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char> &letters, char target) {
    int low = 0, high = letters.size() - 1, mid = 0;
    char last_char;
    if(target >= letters[high]){
        return letters[low];
    }
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (letters[mid] <= target) {
            low = mid + 1;
        } else if (letters[mid] > target) {
            last_char = letters[mid];
            high = mid - 1;
        }
    }
    return last_char;
    }
};