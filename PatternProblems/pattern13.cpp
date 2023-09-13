//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int space = 2*n-2;
        for(int i = 0; i < n ; i++) {
            for(int j = 0; j <= i; j++) cout << j+1 << " ";
            //space
            for(int k = 0; k < space; k++) cout << "  ";
            //reverse
            for(int l = i; l >= 0; l--) cout << l+1 << " ";
            space -= 2;
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

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/