#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

int countRev (string s)
{

    // your code here
    stack<char>x;
    int count=0;
    
    if(s.length()%2!=0)
    {
        return -1;
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='{')
        {
           x.push(s[i]);
        }
        else
        {
            if(x.empty())
            {
              
              count++;
              x.push('{');
            }
            else{
            x.pop();
           
        }
        }   
    }
   count=count+(x.size()/2);
   return count;
}
