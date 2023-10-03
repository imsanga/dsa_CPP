// To find the frequency of numbers
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 3, 4, 5, 1};
    int hashk[n] = {};
    
    for(int i = 0; i <= n; i++) hashk[arr[i]]++;
    for(int i = 0; i <= n; i++) cout << i << " - " << hashk[i] << " times" << endl;

    return 0;
}

// To find the frequency of characters
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character which u want to check in ur name: ";
    cin >> ch;
    
    string st = "sangameshwaran";
    int x = st.size();
    int hashk[26];
    
    for(int i = 0; i < x; i++) hashk[st[i] - 'a']++;
    cout << ch << " - " << hashk[ch - 'a'] << " times" << endl;

}

// To find the frequency of numbers using stl-map
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number which u want to search: ";
    cin >> x;
    
    int arr[5] = {1, 3, 4, 5, 1};
    map<int, int> mpp;
    
    for(int i = 0; i < 5; i++) {
        cout << "Before " << mpp[arr[i]];
        mpp[arr[i]]++;
        cout << " After " << mpp[arr[i]] << endl;
    }
    cout << "************" << endl;
    for(auto it : mpp) cout << it.first << " => " << it.second << endl;
    cout << "************" << endl;
    cout << x << " occurs " << mpp[x] << " times";
    
    return 0;
}


// To find the frequency of characters using stl-map
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cout << "Enter the character which u want to search: ";
    cin >> x;
    
    string st = "sangameshwaran";
    map<char, int> mpp;
    
    for(int i = 0; i < st.size(); i++) mpp[st[i]]++;

    for(auto it : mpp) cout << it.first << " => " << it.second << endl;
    cout << "************" << endl;
    cout << x << " occurs " << mpp[x] << " times";
    
    return 0;
}

