// Find the smallest and second smallest element in an array - GFG

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    int small = INT_MAX, secondS;
    vector<int> ans;
    
    for(int i = 0; i < n; i++) {
        if(a[i] < small) {
            secondS = small;
            small = a[i];
        }
        else if(a[i] < secondS && a[i] != small) secondS = a[i];
    }
    if(secondS == INT_MAX) return {-1};
    else {
         ans.push_back(small);
         ans.push_back(secondS);
         return ans;
    }
}