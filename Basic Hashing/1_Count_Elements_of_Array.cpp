// To find the frequency of numbers
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 3, 4, 5, 1};
    int hashk[n];
    
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


