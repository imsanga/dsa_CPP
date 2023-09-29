//Brute force
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    
    arr[0] = 0;
    arr[1] = 1;

    if(n == 0) cout << arr[0];
    else if(n == 1) cout << arr[0] << " " << arr[1];
    else {
        for(int i = 2; i <= n; i++) arr[i] = arr[i-2] + arr[i-1];
        for(int i = 0; i <= n; i++) cout << arr[i] << " ";
    }
    
    return 0;
}

//Approach 2.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 0, b = 1;
    
    if(n == 0) cout << a;
    else if(n == 1) cout << a << " " << b << " ";
    else {
        int sum;
        cout << a << " " << b << " ";
        for(int i = 2; i <= n; i++) {
            sum = a + b;
            a = b;
            b = sum;
            cout << sum << " ";
        }
    }
    
    return 0;
}