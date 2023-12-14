#include <bits/stdc++.h>
using namespace std;
string subtractStrings(string num1, string num2)
{
  if (num1.size() < num2.size() or (num1.size() == num2.size() and num1 < num2))
    swap(num1, num2);
  while (num2.size() < num1.size())
    num2 = "0" + num2;
  string result = "";
  int borrow = 0;
  for (int i = num1.size() - 1; i >= 0; --i)
  {
    int digit1 = num1[i] - '0';
    int digit2 = num2[i] - '0';
    int diff = digit1 - digit2 - borrow;
    if (diff < 0)
    {
      diff += 10;
      borrow = 1;
    }
    else
      borrow = 0;
    result = to_string(diff) + result;
  }
  return result;
}
void solve()
{
  string num1, num2;
  cin >> num1 >> num2;
  cout << subtractStrings(num1, num2) << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}