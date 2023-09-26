//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    string isPrime(int N){
       int ct = 0;
       for(int i = 1; i*i <= N; i++) {
           if(N % i == 0) {
               ct++;
               if(N/i != i) ct++;
           }
       }
       if(ct == 2) return "It is a prime number";
       else return "It is not a prime number";
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends