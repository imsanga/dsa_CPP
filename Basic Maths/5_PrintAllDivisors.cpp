//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void printAllDivisors(int N)
    {
        vector<int> ans;
        for(int j = 1; j <= sqrt(N); j++) { // for(int j = 1; j*j <= N; j++)
            if(N % j == 0) {
                ans.push_back(j);
                if((N / j) != j) ans.push_back(N / j);
            }
        }
        sort(ans.begin(), ans.end());
        for(int i : ans) cout << i << " ";
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.printAllDivisors(N);
    }
    return 0;
}
// } Driver Code Ends