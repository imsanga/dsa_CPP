// Second Largest - GFG

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int temp = INT_MIN, secondL;
	    for(int i = 0; i < n; i++) {
	        if(arr[i] > temp) {
	            secondL = temp;
	            temp = arr[i];
	        }
	        else if(arr[i] > secondL && arr[i] != temp) secondL = arr[i];
	    }
	    if(secondL == INT_MIN) return -1;
	    else return secondL;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends