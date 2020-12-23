https://leetcode.com/problems/next-greater-element-i/

You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements are subset of nums2. Find all the next greater numbers for nums1's elements in the corresponding places of nums2.
The Next Greater Number of a number x in nums1 is the first greater number to its right in nums2. If it does not exist, output -1 for this number.

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> ans_map;
        stack<int> valStack;
        for (auto val : nums2)
        {
            if (valStack.empty() || valStack.top() >= val)
            {
                valStack.push(val);
            }
            else
            {
                while (!valStack.empty() && valStack.top() < val)
                {
                    ans_map[valStack.top()] = val;
                    valStack.pop();
                }
                valStack.push(val);
            }
        }
        vector<int> ans_vector;
        for (auto val : nums1)
        {
            auto pair = ans_map.find(val);
            if (pair != ans_map.end())
            {
                ans_vector.push_back(pair->second);
            }
            else
            {
                ans_vector.push_back(-1);
            }
        }
        return ans_vector;
    }
};