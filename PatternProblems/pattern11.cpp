//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j <= i; j++) cout << "* ";
            cout << endl;
        }
        
        for(int i = 1; i < n; i++) {
            for(int j = n-i; j > 0; j--) cout << "* ";
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

/*
void nStarTriangle(int n) {
    //upperhalf
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
    //lowerhalf
    for(int i = n-1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }
}
*/

/* o/p

* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*

*/