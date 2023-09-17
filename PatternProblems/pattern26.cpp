//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        
        //upperPart
        for(int i = 0; i < n; i++) {
            //space
            for(int j = 0; j < n-i-1; j++) cout << " ";
            //Star
            for(int k = 0; k <= i; k++) cout << "* ";
            cout << endl;
        }
        
        //lowerPart
        for(int i = 0; i < n-1; i++) {
            //space
            for(int j = 0; j <= i; j++) cout << " ";
            //Star
            for(int k = 0; k < n-i-1; k++) cout << "* ";
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
        ob.printSquare(n);
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
 * * * * 
  * * * 
   * * 
    * 

*/
