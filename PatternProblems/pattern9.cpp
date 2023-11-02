//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        //upperTriangle
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n-i-1; j++) cout << " ";
            for(int k = 0; k < i+1; k++) cout << "* ";
            cout << endl;
        }
        //lowerTriangle
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) cout << " ";
            for(int k = n-i-1; k >= 0; k--) cout << "* ";
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends

//2.0

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        //upperhalf
        for(int i = 1; i <= n; i++) {
            //space
            for(int j = 1; j <= n-i; j++) cout << " ";
            //star
            for(int k = 1; k <= i; k++) cout << "* ";
            cout << endl;
        }
        //lowerhalf
        for(int i = n; i >= 1; i--) {
            //space
            for(int j = 1; j <= n-i; j++) cout << " ";
            //star
            for(int k = 1; k <= i; k++) cout << "* ";
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
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends

/* o/p

    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
    
*/