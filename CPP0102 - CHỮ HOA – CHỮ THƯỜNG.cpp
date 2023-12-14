#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (isupper(x))
            cout << (char)tolower(x);
        else
            cout << (char)toupper(x);
        cout << endl;
    }
    return 0;
}