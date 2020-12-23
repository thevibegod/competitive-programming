// https://leetcode.com/problems/merge-two-sorted-lists/

// Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.

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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {

        ListNode *new_head = nullptr;
        if (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val < l2->val)
            {
                new_head = l1;
                l1 = l1->next;
            }
            else
            {
                new_head = l2;
                l2 = l2->next;
            }
        }
        else if (l1 != nullptr)
        {
            new_head = l1;
            l1 = l1->next;
        }
        else if (l2 != nullptr)
        {
            new_head = l2;
            l2 = l2->next;
        }
        else
        {
            return new_head;
        }
        ListNode *temp = new_head;
        while (l1 != nullptr && l2 != nullptr)
        {
            if (l1->val < l2->val)
            {
                temp->next = l1;
                l1 = l1->next;
            }
            else
            {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        if (l1 != nullptr)
        {
            temp->next = l1;
        }
        if (l2 != nullptr)
        {
            temp->next = l2;
        }
        return new_head;
    }
};