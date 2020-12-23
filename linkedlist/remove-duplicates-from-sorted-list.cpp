// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

// Given a sorted linked list, delete all duplicates such that each element appear only once.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *temp = head;
        while (temp != nullptr)
        {
            ListNode *next_node = temp->next;
            if (next_node)
            {
                if (temp->val == next_node->val)
                {
                    ListNode *next_next_node = next_node->next;
                    temp->next = next_next_node;
                    continue;
                }
            }

            temp = temp->next;
        }
        return head;
    }
};