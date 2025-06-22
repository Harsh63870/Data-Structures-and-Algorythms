#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        ListNode* p = headA;
        ListNode* q = headB;
        while(p != NULL){
            while(q != NULL){
                if(p->val == q->val){
                    return p;
                }
                q = q->next;
            }
            q = headB;
            p = p->next;
        }
        return NULL;
    }
};