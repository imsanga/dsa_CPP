// Missing number in array - GFG

// Brute Force Approach 1
// class Solution{
//   public:
//     int MissingNumber(vector<int>& array, int n) {
//         sort(array.begin(), array.end());
//         for(int i = 0; i < n; i++) {
//             if(array[i] != i+1) return i+1;
//         }
//     }
// };

// Brute Force Approach 2

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        set<int> st;
        for(int i = 0; i < n-1; i++) st.insert(array[i]);
        int j = 1;
        for(int x : st) {
            if(x != j) return j;
            j++;
        }
        return j;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends


// Optimal Approach using sum of Natural numbers

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum1 = (n * (n+1)) / 2;
        int sum2 = 0;
        for(int i = 0; i < n-1; i++) sum2 += array[i];
        int ans = sum1 - sum2;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends