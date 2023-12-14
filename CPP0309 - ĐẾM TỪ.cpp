#include <bits/stdc++.h>
using namespace std;
int countWords(string &str)
{
    istringstream iss(str);
    int wordCount = 0;
    string word;
    while (iss >> word)
        wordCount++;
    return wordCount;
}
void solve()
{
    string s;
    getline(cin, s);
    int count = countWords(s);
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        scanf("\n");
        solve();
    }
    return 0;
}