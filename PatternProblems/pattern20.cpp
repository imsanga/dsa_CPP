//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i = 0; i < n; i++) {
            //space
            for(int sp = 0; sp < n-i-1; sp++) cout << " ";
            //print
            char ch = 64; //To increment in the first row as 'A', we can keep '@' => ascii value of 64
            for(int j = 0; j < 2*i+1; j++) {
                if(j <= i) cout << ++ch;
                else cout << --ch;
            }
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

   A
  ABA
 ABCBA
ABCDCBA

*/