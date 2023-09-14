//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        char ch = 'A' + n-1; //we can use 65(ascii value of 'A')instead of 'A'
        char start = ch;
        for(int i = 1; i <= n; i++) {
            for(char j = start; j <= ch; j++) cout << j << " ";
            start--;
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
D E 
C D E 
B C D E 
A B C D E 

*/