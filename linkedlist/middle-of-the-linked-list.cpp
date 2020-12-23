// https://leetcode.com/problems/middle-of-the-linked-list/

// Given a non-empty, singly linked list with head node head, return a middle node of linked list.
// If there are two middle nodes, return the second middle node.

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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *temp2 = temp;
        while (temp2 != nullptr)
        {

            if (temp2->next == nullptr)
            {
                return temp;
            }
            temp = temp->next;
            temp2 = temp2->next->next;
        }
        return temp;
    }
};