// 83. Remove Duplicates from Sorted List
// Difficulty: Easy

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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) {
            return NULL;
        }
        
        ListNode *ptr = head;
        ListNode *temp = head;
        
        while(temp!=NULL) {
            ptr = temp;
            while(ptr->next!=NULL && ptr->val==ptr->next->val) {
                ptr = ptr->next;
            }
            temp->next = ptr->next;
            temp = temp->next;
        }
        return head;
        
    }
};
