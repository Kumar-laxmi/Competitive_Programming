//21. Merge Two Sorted Lists
//Difficulty: Easy

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ptr = new ListNode();
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        
        if(list1->val<=list2->val){
            ptr = list1;
            ptr->next = mergeTwoLists(list1->next,list2);
        }
        else{
            ptr = list2;
            ptr->next = mergeTwoLists(list1,list2->next);
        }
        
        return ptr;
    }
};
