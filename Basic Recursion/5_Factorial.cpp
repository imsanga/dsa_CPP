//Non Recursive

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int factorialN;
    cin >> factorialN;
    
    int sum = 1;
    for(int i = factorialN; i >= 1; i--) {
        sum *= i;
    }
    cout << "Factorial of " << factorialN << " is " << sum;

    return 0;
}


//Recursive

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if(n == 0) return 1;
    return (n * factorial(n - 1));
}

int main()
{
    int factorialN;
    cin >> factorialN;
    
    cout << "Factorial of " << factorialN << " is " << factorial(factorialN);
    return 0;
}