//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int op_sp = 0; //set the o/p space inside the star
        
        // upperPart
        for(int i = n; i >= 1; i--) {
            //star
            for(int j = i; j >= 1; j--) cout << "*";
            //space
            for(int sp = 0; sp < op_sp; sp++) cout << " ";
            //star
            for(int k = i; k >= 1; k--) cout << "*";
            op_sp += 2;
            cout << endl;
        }
        
        op_sp = 2*n-2; //set the o/p space for lowerPart
        
        // lowerPart
        for(int i = 1; i <= n; i++) {
            //star
            for(int j = 1; j <= i; j++) cout << "*";
            //space
            for(int sp = 0; sp < op_sp; sp++) cout << " ";
            //star
            for(int k = 1; k <= i; k++) cout << "*";
            op_sp -= 2;
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

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/