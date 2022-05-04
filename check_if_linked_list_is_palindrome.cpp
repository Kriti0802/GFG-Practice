#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution{

  public:
    //Function to check whether the list is palindrome.
    
        Node* reverse(Node* head)
    {
        Node*prev =NULL;
        Node* curr=head;
        Node* next=NULL;
        
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
   
    bool isPalindrome(Node *head)
    {
       if(head==NULL && head->next==NULL)
       {
           return true;
       }
       Node* fast=NULL;
       Node* slow=NULL;
       while(fast->next!=NULL && fast->next->next!=NULL && slow!=NULL)
       {
           fast=fast->next->next;
           slow=slow->next;
       }
       slow->next=reverse(slow->next);
       slow=slow->next;
       
       while(head!=NULL && slow!=NULL)
       {
           if(head->data!=slow->data)
           return false;
           head=head->next;
           slow=slow->next;
       }
       return true;
    }
};

