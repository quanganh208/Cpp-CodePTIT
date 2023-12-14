#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream input("DATA.in");
    fstream output;
    int x;
    map<int, int> mp;
    while (input >> x)
        mp[x]++;
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
        cout << it->first << " " << it->second << endl;
    input.close();
    return 0;
}