#include <bits/stdc++.h>
using namespace std;
class Customer
{
public:
    string id, name, gender, dateOfBirth, address;
};
class Product
{
public:
    string id, name, unit;
    int priceBuy, priceSell;
};
int n = 0, m = 0;
Customer listCustomer[25];
Product listProduct[45];
class KhachHang
{
public:
    string id, name, gender, dateOfBirth, address;
    friend istream &operator>>(istream &is, KhachHang &customer)
    {
        static int idx = 0;
        customer.id = to_string(++idx);
        customer.id.insert(0, 3 - customer.id.length(), '0');
        customer.id = "KH" + customer.id;
        getline(is >> ws, customer.name);
        is >> customer.gender;
        is >> customer.dateOfBirth;
        getline(is >> ws, customer.address);
        listCustomer[n].id = customer.id;
        listCustomer[n].name = customer.name;
        listCustomer[n].gender = customer.gender;
        listCustomer[n].dateOfBirth = customer.dateOfBirth;
        listCustomer[n].address = customer.address;
        n++;
        return is;
    }
};
class MatHang
{
public:
    string id, name, unit;
    int priceBuy, priceSell;
    friend istream &operator>>(istream &is, MatHang &product)
    {
        static int idx = 0;
        product.id = to_string(++idx);
        product.id.insert(0, 3 - product.id.length(), '0');
        product.id = "MH" + product.id;
        getline(is >> ws, product.name);
        is >> product.unit;
        is >> product.priceBuy;
        is >> product.priceSell;
        listProduct[m].id = product.id;
        listProduct[m].name = product.name;
        listProduct[m].unit = product.unit;
        listProduct[m].priceBuy = product.priceBuy;
        listProduct[m].priceSell = product.priceSell;
        m++;
        return is;
    }
};
class HoaDon : public KhachHang, public MatHang
{
public:
    string idBill, idCustomer, idProduct;
    int amount;
    friend istream &operator>>(istream &is, HoaDon &bill)
    {
        is >> bill.idCustomer >> bill.idProduct >> bill.amount;
        static int idx = 0;
        bill.idBill = to_string(++idx);
        bill.idBill.insert(0, 3 - bill.idBill.length(), '0');
        bill.idBill = "HD" + bill.idBill;
        for (int i = 0; i < n; i++)
            if (bill.idCustomer == listCustomer[i].id)
            {
                bill.KhachHang::name = listCustomer[i].name;
                bill.KhachHang::address = listCustomer[i].address;
                break;
            }
        for (int i = 0; i < m; i++)
            if (bill.idProduct == listProduct[i].id)
            {
                bill.MatHang::name = listProduct[i].name;
                bill.MatHang::unit = listProduct[i].unit;
                bill.MatHang::priceBuy = listProduct[i].priceBuy;
                bill.MatHang::priceSell = listProduct[i].priceSell;
                break;
            }
        return is;
    }
    friend ostream &operator<<(ostream &os, HoaDon bill)
    {
        os << bill.idBill << " " << bill.KhachHang::name << " " << bill.KhachHang::address << " " << bill.MatHang::name << " " << bill.MatHang::unit << " " << bill.MatHang::priceBuy << " " << bill.MatHang::priceSell << " " << bill.amount << " " << bill.MatHang::priceSell * bill.amount << endl;
        return os;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
#endif
    ifstream inputKH("KH.in");
    ifstream inputMH("MH.in");
    ifstream inputHD("HD.in");
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N, M, K, i;
    inputKH >> N;
    for (i = 0; i < N; i++)
        inputKH >> dskh[i];
    inputMH >> M;
    for (i = 0; i < M; i++)
        inputMH >> dsmh[i];
    inputHD >> K;
    for (i = 0; i < K; i++)
        inputHD >> dshd[i];
    for (i = 0; i < K; i++)
        cout << dshd[i];
    inputKH.close();
    inputMH.close();
    inputHD.close();
    return 0;
}