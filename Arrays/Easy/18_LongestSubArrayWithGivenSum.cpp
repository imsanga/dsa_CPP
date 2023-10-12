// Longest Subarray with given Sum K(Positives)

// // Bruteforce with 3 loops
// #include <bits/stdc++.h>
// using namespace std;

// int getLongestSubarray(vector<int>& a, long long k) {
//     int maxy = INT_MIN;
//     for(int i = 0; i < a.size(); i++) {
//         for(int j = i; j < a.size(); j++) {
//             long long sum = 0;
//             for(int x = i; x <= j; x++) sum += a[x];
//             if(sum == k) maxy = max(maxy, j - i + 1);
//         }
//     }
//     return maxy;
// }

// int main()
// {
//     vector<int> a = {2, 3, 5, 1, 9};
//     long long k = 10;
//     int len = getLongestSubarray(a, k);
//     cout << "The length of the longest subarray is: " << len << "\n";
//     return 0;
// }

// // Bruteforce with 2 loops

// #include <bits/stdc++.h>
// using namespace std;

// int getLongestSubarray(vector<int>& a, long long k) {
//     int maxy = INT_MIN;
//     for(int i = 0; i < a.size(); i++) {
//         long long sum = 0;
//         for(int j = i; j < a.size(); j++) {
//             sum += a[j];
//             if(sum == k) maxy = max(maxy, j - i + 1);
//         }
//     }
//     return maxy;
// }

// int main()
// {
//     vector<int> a = {2, 3, 5, 1, 9};
//     long long k = 10;
//     int len = getLongestSubarray(a, k);
//     cout << "The length of the longest subarray is: " << len << "\n";
//     return 0;
// }


// Longest Sub-Array with Sum K - GFG

// Hashing Approach

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        map<int, int> mpp;
        int sum = 0, maxy = 0;
        for(int i = 0; i < N; i++) {
            sum += A[i];
            
            if(sum == K) maxy = max(maxy, i+1);
            
            int rem = sum - K;
            if(mpp.find(rem) != mpp.end()) {
                int len = i - mpp[rem];
                maxy = max(maxy, len);
            }
            
            if(mpp.find(sum) == mpp.end()) mpp[sum] = i;
        }
        return maxy;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends





