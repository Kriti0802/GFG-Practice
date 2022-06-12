#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include <stack>
#include <map>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; void solve(Node* root,int &count)
  {
      if(root==NULL)
      {
          return ;
      }
       
      if(root->left==NULL && root->right==NULL)
      {
          count++;
      }
     solve(root->left,count);
      solve(root->right,count);
  }
   
int countLeaves(Node* root)
{
  // Your code here
  int count=0;
  solve(root,count);
  
  return count;
}
