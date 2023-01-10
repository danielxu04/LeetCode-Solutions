#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *ptr1 = headA;
        ListNode *ptr2 = headB;

        if(!ptr1 || !ptr2){
            return NULL;
        }

        while(ptr1 && ptr2 && ptr1 != ptr2){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;

            if(ptr1 == ptr2){
                return ptr1;
            }

            if(!ptr1){
                ptr1 = headB;
            }
            if(!ptr2){
                ptr2 = headA;
            }
        }

        return ptr1;

    }
};