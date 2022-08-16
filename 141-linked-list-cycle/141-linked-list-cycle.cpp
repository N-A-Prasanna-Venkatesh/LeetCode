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
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> vals;
        while(head){
            if(vals[head]==1) return true;
            vals[head]=1;
            head=head->next;
        }
        return false;
    }
};