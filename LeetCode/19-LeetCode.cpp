//19. Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ptr = new ListNode();
        ptr = head;
        
        //Calculating the length of list
        int length = 0;
        while(ptr!=NULL)
        {
            length++;
            ptr = ptr->next;
        }
        
        int pos = length - n;
        
        //Now deleting the desired element
        if(pos==0)
            return head->next;
        
        ptr = head;
        for(int i=0;i<pos-1;i++)
            ptr = ptr->next;
        ptr->next = ptr->next->next;
        
        return head;
    }
};
