//
// Difficulty: Easy

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headB) {
            ListNode *temp = new ListNode();
            temp = headA;
            while(temp) {
                if(temp == headB) {
                    return headB;
                }
                temp = temp->next;
            }
            headB = headB->next;
        }

        return 0;
    }
};
