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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *final = new ListNode(0);
        ListNode *preHead = final;
        int extra = 0;

        while(l1 != NULL || l2 != NULL || extra){
            // sum for consecutive placevalues
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
            // if sum adds up to more than 10, carry on extra to the next place value
            extra = sum / 10;
            preHead->next = new ListNode(sum % 10);
            
            preHead = preHead->next;
            l1 = l1? l1->next : l1;
            l2 = l2? l2->next : l2;
        }

        return final->next;
        
    }
};