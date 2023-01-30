// Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
// Note: can you take care of the duplicates without using any additional Data Structure?

// Example 1:

// Input:
// n1 = 6; A = {1, 5, 10, 20, 40, 80}
// n2 = 5; B = {6, 7, 20, 80, 100}
// n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}

#include <bits\stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        vector<int> v;
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        unordered_map<int, int> mp3;
        for (int i = 0; i < n1; i++)
        {
            mp1[A[i]]++;
        }
        for (int i = 0; i < n2; i++)
        {
            mp2[B[i]]++;
        }
        for (int i = 0; i < n3; i++)
        {
            mp3[C[i]]++;
        }

        for (int i = 0; i < n1; i++)
        {
            if (mp1[A[i]] > 0 && mp2[A[i]] > 0 && mp3[A[i]] > 0)
            {
                v.push_back(A[i]);
                mp1[A[i]] = 0;
            }
        }
        return v;
    }
};