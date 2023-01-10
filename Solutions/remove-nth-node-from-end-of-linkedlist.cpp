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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *one = head;
        ListNode *two = head;
        
        while(n--){
            two = two->next;
        }
        
        if(two == NULL){
            return one->next;
        }
        
        while(two->next){
            one = one->next;
            two = two->next;
        }
        
        one->next = one->next->next;
        
        return head;
        
        
    }
};