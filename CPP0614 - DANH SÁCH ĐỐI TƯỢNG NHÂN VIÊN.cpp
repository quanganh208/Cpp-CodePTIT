#include <bits/stdc++.h>
using namespace std;
class NhanVien
{
	friend istream &operator>>(istream &is, NhanVien &a)
	{
		scanf("\n");
		static int index = 1;
		string s = to_string(index++);
		s.insert(0, 5 - s.length(), '0');
		a.id = s;
		getline(is, a.name);
		getline(is, a.gender);
		getline(is, a.date);
		getline(is, a.address);
		getline(is, a.mst);
		getline(is, a.dateSign);
		a.chuanHoa();
		return is;
	}
	friend ostream &operator<<(ostream &os, NhanVien &a)
	{
		cout << a.id << " " << a.name << a.gender << " " << a.date << " " << a.address << " " << a.mst << " " << a.dateSign << endl;
		return os;
	}
private:
	string id;
	string name;
	string gender;
	string date;
	string address;
	string mst;
	string dateSign;
public:
	void chuanHoa()
	{
		stringstream ss(name);
		string token;
		name = "";
		while (ss >> token)
		{
			token[0] = toupper(token[0]);
			for (int i = 1; i < token.length(); i++)
				token[i] = tolower(token[i]);
			name += token + " ";
		}
		if (date[1] == '/')
			date.insert(0, "0");
		if (date[4] == '/')
			date.insert(3, "0");
	}
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}