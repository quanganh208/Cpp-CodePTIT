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
        scanf("\n");
        getline(is, customer.name);
        is >> customer.gender;
        is >> customer.dateOfBirth;
        scanf("\n");
        getline(is, customer.address);
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
        scanf("\n");
        getline(is, product.name);
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
        os << bill.idBill << " " << bill.KhachHang::name << " " << bill.KhachHang::address << " " << bill.MatHang::name << " " << bill.amount << " " << bill.MatHang::priceSell * bill.amount << " " << (bill.MatHang::priceSell - bill.MatHang::priceBuy) * bill.amount << endl;
        return os;
    }
};
void sapxep(HoaDon dshd[], int K)
{
    sort(dshd, dshd + K, [](HoaDon a, HoaDon b)
         { return (a.MatHang::priceSell - a.MatHang::priceBuy) * a.amount >= (b.MatHang::priceSell - b.MatHang::priceBuy) * b.amount; });
}
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    sapxep(dshd, K);
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}