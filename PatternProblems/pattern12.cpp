//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int start;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) start = 1;
            else start = 0;
            for(int j = 0; j <= i; j++) {
                cout << start << " ";
                start = 1 - start;
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

//2.0 
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int temp;
        for(int i = 1; i <= n; i++) {
            if(i % 2 == 0) temp = 0;
            else temp = 1; 
            for(int j = 1; j <= i; j++) {
                cout << temp << " ";
                if(temp == 1) temp = 0;
                else temp = 1;
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

1 
0 1 
1 0 1
0 1 0 1 
1 0 1 0 1

*/