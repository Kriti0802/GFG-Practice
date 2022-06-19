/*Given a Binary Tree with all unique values and two nodes value, n1 and n2. The task is to find the lowest common ancestor of the given two nodes. We may assume that either both n1 and n2 are present in the tree or none of them are present.*/



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
};class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
      if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2) // n1 and n2 are given node
    {

        return root;
    }
    Node *left = lca(root->left, n1, n2);
    Node *right = lca(root->right, n1, n2);

    if (left != NULL && right != NULL)
    {

        return root;
    }
    else if (left != NULL && right == NULL)
    {
        return left;
    }
    else if (left == NULL && right != NULL)
    {
        return right;
    }
    else
    {
        return NULL;
    }
    
    }
};