//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i = 1; i <= n; i++) {
            char ch = 'A' + n-1; //we can use 65(ascii value of 'A')instead of 'A'
            for(int j = 1; j <= i; j++) cout << ch-- << " ";
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

E
E D
E D C
E D C B
E D C B A

*/