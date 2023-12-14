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
    ifstream inp1("DATA1.in");
    fstream inp2("DATA2.in");
    string x;
    map<string, int> a;
    map<string, int> b;
    map<string, int> c;
    while (inp1 >> x)
    {
        a[lower(x)]++;
        b[lower(x)]++;
    }
    while (inp2 >> x)
    {
        a[lower(x)]++;
        if (b[lower(x)])
            c[lower(x)]++;
    }
    for (auto i : a)
        cout << i.first << " ";
    cout << endl;
    for (auto i : c)
        cout << i.first << " ";
}