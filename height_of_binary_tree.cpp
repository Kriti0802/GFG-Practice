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
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL)
        {
            return NULL;
        }
        int left=height(node->left);
        int right=height(node->right);
        int ans=max(left,right)+1;
        
        return ans;
    }
};