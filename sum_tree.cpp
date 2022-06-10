/*Given a Binary Tree. Return true if, for every node X in the tree other than the leaves, its value is equal to the sum of its left subtree's value and its right subtree's value. Else return false.

An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.*/


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
}; 
class Solution
{
    int issum(Node* root,bool &flag)
    {
         if(root==NULL)
         {
             return 0;
         }
         if(root->left==NULL && root->right==NULL)
         {
             return root->data;
         }
         int left=issum(root->left,flag);
         int right=issum(root->right,flag);
         if((left+right)!=root->data){
             flag=false;
         }
       return root->data+left+right;
        
    }
    public:
    bool isSumTree(Node* root)
    {
         // Your code here
         bool flag=true;
       int ans=issum(root,flag);
       return flag;
         
    }
};