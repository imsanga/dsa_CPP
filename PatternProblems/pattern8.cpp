//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i = 0; i < n; i++) {
	        for(int j = 0; j < i; j++) cout << " ";
	        for(int k = 0; k < 2*n-(2*i+1); k++) cout << "*";
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
    for(int i = n; i >= 1; i--) {
        //space
        for(int j = 1; j <= n-i; j++) cout << " ";
        //pattern
        for(int k = 1; k <= 2*i-1; k++) cout << "*";
        cout << endl;
    }
}
*/

/* o/p

*********
 *******
  *****
   ***
    *
    
*/