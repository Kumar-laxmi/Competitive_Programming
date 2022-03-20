//61. Rotate List
//Difficulty: Medium

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0){
            return head;
        }
        if(head==NULL){
            return NULL;
        }
        ListNode *current = new ListNode();
        current = head;
        int length = 1;
        
        while(current->next!=NULL){
            current = current->next;
            length++;
        }
        current->next = head;  //Making Circular Linked-List
        current = head;
        
        for(int i=0;i<length-(k%length)-1;i++){
            current = current->next;
        }
        head = current->next;
        current->next = NULL;
        
        
        return head;
    }
};
