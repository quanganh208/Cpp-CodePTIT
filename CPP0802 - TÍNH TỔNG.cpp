#include <bits/stdc++.h>
using namespace std;
bool isNumber(string s)
{
    string::iterator it = s.begin();
    while (it != s.end() and isdigit(*it))
        ++it;
    return !s.empty() and it == s.end() and s.size() <= 9;
}
int main()
{
    ifstream input("DATA.in");
    fstream output;
    string x;
    long long total = 0;
    while (input >> x)
    {
        if (isNumber(x) and stoi(x) <= INT_MAX)
            total += stoi(x);
    }
    cout << total << endl;
    input.close();
    return 0;
}