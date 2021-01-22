// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

// Given a string S of lowercase letters, a duplicate removal consists of choosing two adjacent and equal letters, and removing them.
// We repeatedly make duplicate removals on S until we no longer can.
// Return the final string after all such duplicate removals have been made.  It is guaranteed the answer is unique.

class Solution
{
public:
    string removeDuplicates(string S)
    {
        stack<char> charStack;
        for (auto ch : S)
        {
            if (not charStack.empty() && charStack.top() == ch)
            {
                charStack.pop();
            }
            else
            {
                charStack.push(ch);
            }
        }
        string new_str;
        while (!charStack.empty())
        {
            new_str += charStack.top();
            charStack.pop();
        }
        for (int i = 0; i < (new_str.size() / 2); i++)
        {
            char temp = new_str[i];
            new_str[i] = new_str[new_str.size() - 1 - i];
            new_str[new_str.size() - 1 - i] = temp;
        }
        return new_str;
    }
};