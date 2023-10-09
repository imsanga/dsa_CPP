// Rotate Array (AntiClockwise-Left) - GFG

// BruteForce

#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int k) {
    while(k > 0) {
        int temp = arr[0];
        for(int i = 1; i < n; i++) arr[i-1] = arr[i];
        arr[n-1] = temp;
        k--;
    }
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

int main() {
  int n = 5, k = 2;
  int arr[]= {1,2,3,4,5};
  solve(arr, n, k);
}


// Optimal Solution

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        if(d > n) d %= n;
        //21345
        reverse(arr, arr+d);
        //21543
        reverse(arr+d, arr+n);
        //34512
        reverse(arr, arr+n);
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends