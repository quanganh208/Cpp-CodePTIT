#include <bits/stdc++.h>
using namespace std;
class Company
{
    friend istream &operator>>(istream &is, Company &a)
    {
        is.ignore();
        getline(is, a.id);
        getline(is, a.name);
        is >> a.quantity;
        return is;
    }
    friend ostream &operator<<(ostream &os, Company &a)
    {
        os << a.id << " " << a.name << " " << a.quantity << endl;
        return os;
    }
    string id, name;
    int quantity;
public:
    int getQuantity()
    {
        return quantity;
    }
    string getId()
    {
        return id;
    }
};
bool compare(Company a, Company b)
{
    if (a.getQuantity() == b.getQuantity())
        return a.getId() < b.getId();
    return a.getQuantity() > b.getQuantity();
}
int main()
{
    int n;
    cin >> n;
    Company a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, compare);
    for (int i = 0; i < n; i++)
        cout << a[i];
    return 0;
}