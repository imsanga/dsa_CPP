// Find duplicates in an array - GFG

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        map<int, int> mpp;
        vector<int> ans;
        for(long long x = 0; x < n; x++) mpp[arr[x]]++;
        for(auto z : mpp) {
            if(z.second > 1) ans.push_back(z.first);
        }
        if(ans.empty()) ans.push_back(-1);
        //sort(ans.begin(), ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends