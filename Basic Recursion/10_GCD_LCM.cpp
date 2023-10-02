// GCD of two numbers - GFG

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    if(B == 0) return A; 
	    else if(B > A) swap(A, B);
	    gcd(B, A % B);
	} 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
// } Driver Code Ends


// LCM And GCD - GFG


// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     long long gcd(long long A, long long B) {
// 	    if(B == 0) return A; 
// 	    else if(B > A) swap(A, B);
// 	    gcd(B, A % B);
//     }
//     vector<long long> lcmAndGcd(long long A , long long B) {
//         vector<long long> ans;
        
//         long long lcm = A * B / gcd(A, B);
        
//         ans.push_back(lcm);
//         ans.push_back(gcd(A,B));
        
//         return ans;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long A,B;
        
//         cin>>A>>B;

//         Solution ob;
//         vector<long long> ans = ob.lcmAndGcd(A,B);
//         cout<<ans[0]<<" "<<ans[1]<<endl;
//     }
//     return 0;
// }
// // } Driver Code Ends