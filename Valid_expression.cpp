#include<bits/stdc++.h>
using namespace std;
bool valid(string s)
{
    // code here
    stack<int>st;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('||s[i]=='{' || s[i]=='[')
    {
        st.push(s[i]);
    }
    else if(!st.empty())
    {
        if(s[i]==')' && st.top()=='(' || s[i]=='}' && st.top()=='{' || s[i]==']' && st.top()=='[' )
        {
            st.pop();
        }
        else
        {
        return false;
         }
     
    }
else{
        return false;
    }
    
    }
    if(st.empty()){
        return true;
    }
    else
    return false;
}