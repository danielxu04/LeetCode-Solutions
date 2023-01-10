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
    void reorderList(ListNode* head) {
        
        if(head==NULL || head->next==NULL || head->next->next==NULL){
            return;
        }

        stack<ListNode*> st;

        ListNode *ptr = head;
        int n = 0;

        // fill the stack with nodes
        while(ptr != NULL){
            st.push(ptr);
            ptr = ptr->next;
            n++;
        }

        ListNode *ptr2 = head;
        for(int i = 0; i < n/2; i++){
            ListNode* element = st.top();
            st.pop();
            element->next = ptr2->next;
            ptr2->next = element;
            ptr2 = ptr2->next->next;
        }

        ptr2->next = NULL;


    }
};