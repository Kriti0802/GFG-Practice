// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
bool isCircular(Node *head)
{
   // Your code here
   
 if(head==NULL)
 {
     return true;
 }
 Node * curr=head;
while(curr->next!=NULL)
{
    curr=curr->next;
    if(curr->next==head)
    return true;
}
return false;
}