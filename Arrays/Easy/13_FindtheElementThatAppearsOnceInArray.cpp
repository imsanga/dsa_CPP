// Single Number - Leetcode

// Brute Force

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int num, ct;
//         for(int i = 0; i < nums.size(); i++) {
//             num = nums[i];
//             ct = 0;
//             for(int j = 0; j < nums.size(); j++) {
//                 if(nums[j] == num) ct++;
//             }
//             if(ct == 1) return nums[i];
//         }
//         return -1;
//     }
// };

// Better Approach 1

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         map<int, int> mpp;
// 	    for(int i = 0; i < nums.size(); i++) mpp[nums[i]]++;
// 	    for(pair x : mpp) {
// 		    if(x.second == 1) return x.first;
// 	    }
//         return -1;
//     }
// };

// Better Approach 2

// #include <bits/stdc++.h>
// using namespace std;

// int getSingleElement(vector<int> &arr) {

//     //size of the array:
//     int n = arr.size();

//     // Find the maximum element:
//     int maxi = arr[0];
//     for (int i = 0; i < n; i++) {
//         maxi = max(maxi, arr[i]);
//     }

//     // Declare hash array of size maxi+1
//     // And hash the given array:
//     int hash[maxi + 1] = {};
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]]++;
//     }

//     //Find the single element and return the answer:
//     for (int i = 0; i < maxi + 1; i++) {
//         if (hash[i] == 1)
//             return i;
//     }

//     //This line will never execute
//     //if the array contains a single element.
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {4, 1, 2, 1, 2};
//     int ans = getSingleElement(arr);
//     cout << "The single element is: " << ans << endl;
//     return 0;
// }



// Find the element that appears once - GFG (Better Approach)

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    unordered_map<int, int> mpp;
	    for(int i = 0; i < N; i++) mpp[A[i]]++;
	    for(auto x : mpp) {
	        if(x.second == 1) return x.first;
	    }
	    return -1;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends
