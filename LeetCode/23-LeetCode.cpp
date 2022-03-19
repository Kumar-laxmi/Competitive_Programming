//23. Merge k Sorted Lists
//Difficulty: Hard

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {    
        vector<int> all;
        
        int n = lists.size();
        for(int i=0;i<n;i++)
        {
            while(lists[i])
            {
                all.push_back(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        
        ListNode *ptr = new ListNode();
        ListNode *temp = ptr;
        
        sort(all.begin(),all.end());
        for(int i=0;i<all.size();i++){
            ptr->next = new ListNode(all[i]);
            ptr = ptr->next;
        }
        
        return temp->next;
    }
};
