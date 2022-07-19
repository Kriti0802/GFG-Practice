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
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        stack<Node*>s1;
        stack<Node*>s2;
    	// Code here
    	vector<int>ans;
        Node* temp=root;
        s1.push(root);
    	while(s1.size()!=0 || s2.size()!=0)
    	{
    	    while(s1.size()!=0)
    	    {
    	        temp=s1.top();
    	        s1.pop();
    	        ans.push_back(temp->data);
    	        if(temp->left!=NULL)
    	        {
    	             s2.push(temp->left);
    	        }
    	        if(temp->right!=NULL)
    	        {
    	            s2.push(temp->right);
    	        }
    	        
    	    }
    	    while(s2.size()!=0)
    	    {
    	        temp=s2.top();
    	        s2.pop();
    	        ans.push_back(temp->data);
    	        if(temp->right!=NULL)
    	        {
    	            s1.push(temp->right);  //for reverse Right to left
    	        }
    	        if(temp->left!=NULL)
    	        {
    	            s1.push(temp->left);
    	        }
    	    }
    	}
    	return ans;
    	
    	
    }
};