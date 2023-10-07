// Remove duplicate elements from sorted Array - GFG

// BruteForce Approach

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        set<int> st;
        for(int i = 0; i < n; i++) st.insert(a[i]);
        int j = 0, sz = st.size();
        for(int x : st) a[j++] = x;
        return sz;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends


// Optimal Approach

// class Solution{
// public:
//     int remove_duplicate(int a[],int n){
//         int dummy = INT_MIN, x = 0;
//         for(int i = 0; i < n; i++) {
//             if(a[i] != dummy) {
//                 dummy = a[i];
//                 a[x++] = a[i];
//             }
//         }
//         return x;
//     }
// };