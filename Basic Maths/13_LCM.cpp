#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    int maxY = max(a, b);
    int minY = min(a, b);
    
    for(int i = 1; i <= maxY; i++) {
        if(((maxY * i) % minY) == 0) {
            cout << maxY * i;
            break;
        }
    }
    
    return 0;
}