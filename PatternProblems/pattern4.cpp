//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) cout << i+1 << " ";
            cout << endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends


/* o/p

1
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5

*/