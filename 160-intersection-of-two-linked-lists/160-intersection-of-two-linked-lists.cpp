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
        ListNode *a=headA,*b=headB;
        int cnt=0,fc1=0,fc2=0;
        if(a==NULL || b==NULL) return NULL;
        while(a!=NULL && b!=NULL && a!=b){            
            if(a==b) return a;
            cnt+=1;
            a=a->next;
            b=b->next;
            if(a==NULL){
                if(fc1==0)
                    fc1=cnt;
                a=headA;
            }
            if(b==NULL){
                b=headB;
                if(fc2==0)
                    fc2=cnt;
            }
            if(fc1!=0 && fc2!=0){
                if(cnt > fc1*fc2)
                    return NULL;
            }
        }
        return a;        
    }
};