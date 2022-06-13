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
}; class Solution {
    private:
    void leftpart(Node* root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return ;
        }
        if(root->left==NULL && root->right==NULL)
        {
            return;
        }
        ans.push_back(root->data);
        if(root->left)
        {
            leftpart(root->left,ans);
        }
        else{
             leftpart(root->right,ans);
        }
    }
    void leafpart(Node* root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return ;
        }
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(root->data);
            return;
        }
        leafpart(root->left,ans);
        leafpart(root->right,ans);
        
    }
    void rightpart(Node* root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return ;
        }
          if(root->left==NULL && root->right==NULL)
        {
            return;
        }
        if(root->right)
        {
            rightpart(root->right,ans);
        }
        else{
            rightpart(root->left,ans);
        }
        ans.push_back(root->data);
    }
public:
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector <int>ans;
        if(root==NULL)
        {
            return ans;
        }
        ans.push_back(root->data);
        leftpart(root->left,ans);
        
        leafpart(root->left,ans);
        leafpart(root->right,ans);
        
        rightpart(root->right,ans);
        
        return ans;
    }
};