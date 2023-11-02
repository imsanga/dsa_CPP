//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i = 0; i < n; i++) {
	        for(int j = 1; j <= n-i; j++) cout << j << " ";
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
void pattern(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) cout << j << " ";
        cout << endl;
    }
}
*/

/* o/p

1 2 3 4 5
1 2 3 4
1 2 3 
1 2  
1 

*/