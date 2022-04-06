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
class Solution
{
    public:
  
    int getCount(struct Node* head){
    int count=0;
        //Code here
        Node* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
    return count;
    }
};