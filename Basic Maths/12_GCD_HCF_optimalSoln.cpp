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
	    //Method1 : Using inbuilt fnc => return __gcd(A, B);
        //Method2 : Euclidean Algorithm => gcd(a,b) = gcd(b, (a%b))
        while(A > 0 && B > 0) {
	        if(A > B) A = A % B;
	        else B = B % A;
	    }
	    if(A == 0) return B;
	    return A;
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