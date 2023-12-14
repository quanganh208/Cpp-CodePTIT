#include <bits/stdc++.h>
using namespace std;
struct Person
{
    string name;
    string dateOfBirth;
    int day, month, year;
};
void sapxep(Person *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if ((arr[i].year > arr[j].year) or (arr[i].year == arr[j].year and arr[i].month > arr[j].month) or (arr[i].year == arr[j].year and arr[i].month == arr[j].month and arr[i].day > arr[j].day))
                swap(arr[i], arr[j]);
}
int main()
{
    int n;
    cin >> n;
    Person *arr = new Person[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name;
        cin >> arr[i].dateOfBirth;
        arr[i].day = stoi(arr[i].dateOfBirth.substr(0, 2));
        arr[i].month = stoi(arr[i].dateOfBirth.substr(3, 2));
        arr[i].year = stoi(arr[i].dateOfBirth.substr(6, 4));
    }
    sapxep(arr, n);
    cout << arr[n - 1].name << endl;
    cout << arr[0].name << endl;
    return 0;
}