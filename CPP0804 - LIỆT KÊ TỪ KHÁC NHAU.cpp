#include <bits/stdc++.h>
using namespace std;
string lower(string x)
{
    for (int i = 0; i < x.length(); i++)
        x[i] = tolower(x[i]);
    return x;
}
int main()
{
    ifstream input("VANBAN.in");
    fstream output;
    string x;
    map<string, int> mp;
    while (input >> x)
        mp[lower(x)]++;
    for (auto i : mp)
        cout << i.first << endl;
    return 0;
}