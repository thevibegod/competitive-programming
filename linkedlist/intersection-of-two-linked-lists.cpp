// https://leetcode.com/problems/intersection-of-two-linked-lists/

// Write a program to find the node at which the intersection of two singly linked lists begins.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *dummyA = headA;
        ListNode *dummyB = headB;
        int size1 = 0, size2 = 0;
        while (dummyA != nullptr)
        {
            size1++;
            dummyA = dummyA->next;
        }
        while (dummyB != nullptr)
        {
            size2++;
            dummyB = dummyB->next;
        }
        dummyA = headA;
        dummyB = headB;
        if (size1 > size2)
        {
            int diff = size1 - size2;
            while (diff > 0)
            {
                dummyA = dummyA->next;
                diff--;
            }
        }
        else
        {
            int diff = size2 - size1;
            while (diff > 0)
            {
                dummyB = dummyB->next;
                diff--;
            }
        }
        while (dummyA)
        {
            if (dummyA == dummyB)
            {
                return dummyA;
            }
            dummyA = dummyA->next;
            dummyB = dummyB->next;
        }
        return nullptr;
    }
};