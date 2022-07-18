/*Given a binary tree of size N. Your task is to complete the function sumOfLongRootToLeafPath(), that find the sum of all nodes on the longest path from root to leaf node.
If two or more paths compete for the longest path, then the path having maximum sum of nodes is being considered.*/

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
    private:
    void solve(Node* root,int sum,int &maxsum,int len,int &maxlen)
    {
        if(root==NULL)
        {
            if(len>maxlen)
            {
                maxlen=len;
                maxsum=sum;
            }
            else if(len==maxlen)
            {
                maxsum=max(maxsum,sum);
            }
            return;
        }
        sum+=root->data;
        solve(root->left,sum,maxsum,len+1,maxlen);
          solve(root->right,sum,maxsum,len+1,maxlen);
        
    }
public:
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int len=0;
        int maxlen=0;
        int sum=0;
        int maxsum=0;
        solve(root,sum,maxsum,len,maxlen);
        
        return maxsum;
    }
};