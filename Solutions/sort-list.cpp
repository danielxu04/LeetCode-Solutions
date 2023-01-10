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
    ListNode* mergeList(ListNode* h1, ListNode* h2){
        if(h1 == NULL){
            return h2;
        }
        if(h2 == NULL){
            return h1;
        }

        ListNode* curr = NULL;
        if(h2->val > h1->val){
            curr = h1;
            h1 = h1->next;
        }
        else{
            curr = h2;
            h2 = h2->next;
        }

        ListNode* temp = curr;
        while(h1 && h2){
            if(h1->val < h2->val){
                temp->next = h1;
                h1 = h1->next;
            }
            else{
                temp->next = h2;
                h2 = h2->next;
            }
            temp = temp->next;
        }

        if(h1 == NULL && h2){
            temp->next = h2;
        }
        else{
            temp->next = h1;
        }
        return curr;
    }

    ListNode* sortList(ListNode* head) {
        // base case
        if(head==NULL || head->next==NULL){
            return head;
        }

        //traverse to middle of linked list
        ListNode *slow = head;
        ListNode *fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* n = slow->next;
        slow->next = NULL;

        ListNode* ll1 = sortList(head);
        ListNode* ll2 = sortList(n);

        head = mergeList(ll1, ll2);

        return head;

    }
};