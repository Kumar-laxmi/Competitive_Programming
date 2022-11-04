// 143. Reorder List
// Difficulty: Medium

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
    ListNode* reverseList(ListNode* head) {
        ListNode *ptr = new ListNode();
        ListNode *current = new ListNode();
        
        if(head==NULL || head->next==NULL) {
            return head;
        }
        
        ptr = head;
        current = head->next;
        
        while(current!=NULL) {
            ptr->next = current->next;
            current->next = head;
            head = current;
            current = ptr->next;
        }
        
        return head;
    }

    ListNode* ReorderList(ListNode *head) {
        if(head == NULL) {
            return NULL;
        }
        else {
            ListNode *forward = new ListNode();
            forward = reverseList(head -> next);
            head->next = ReorderList(forward);
        }

        return head;
        
    }

    void reorderList(ListNode* head) {
        head = ReorderList(head);
    }
};
