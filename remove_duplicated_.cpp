#include<iostream>
using namespace std;
/**
 * definition for singly-linked list.*/

  struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
 

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL)
            return NULL;
        ListNode* Node = head;
        while(Node->next != NULL)
        {
            if(Node->val == Node->next->val )
                Node->next = Node->next->next;
            else
                Node = Node->next;
        }
        return head;
    
    }
};