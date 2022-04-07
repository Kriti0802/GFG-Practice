#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        if(head==NULL){
            return head;
        }
        Node* fast=head;
        Node * slow=head;
        while(fast!=NULL && slow!=NULL && fast->next!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
            if(slow==fast)
            {
                return true;
            }
            
        }
        return false;
    }
};
