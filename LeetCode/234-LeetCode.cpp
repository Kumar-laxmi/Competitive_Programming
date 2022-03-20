//234. Palindrome Linked List
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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode *ptr = new ListNode();
        ptr = head;
        
        while(ptr){
            st.push(ptr->val);
            ptr = ptr->next;
        }
        
        ptr = head;
        while(ptr){
            if(st.top()!=ptr->val){
                return false;
            }
            st.pop();
            ptr = ptr->next;
        }
        return true;
    }
};
