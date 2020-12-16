// https://practice.geeksforgeeks.org/problems/triplet-sum-in-array/0#

// Given an array A[] of N numbers and another number x, determine whether or not there exist three elements in A[] whose sum is exactly x.

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool checkTripleSum(vector<int> &nums, int k) {

    for (int i = 0; i < nums.size(); i++) {
        unordered_set<int> data;
        for (int j = 0; j < nums.size(); j++) {
            if (j != i) {
                if (data.find(k - nums[i] - nums[j]) != data.end()) {
                    return true;
                } else {
                    data.insert(nums[j]);
                }
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    vector<bool> outputs;
    for (int i = 0; i < t; i++) {
        int n, x;
        cin >> n;
        cin >> x;
        vector<int> nums;
        int temp;
        for (int j = 0; j < n; j++) {
            cin >> temp;
            nums.push_back(temp);
        }
        outputs.push_back(checkTripleSum(nums, x));
    }
    for (auto output:outputs) {
        cout << output << endl;
    }
    return 0;
}