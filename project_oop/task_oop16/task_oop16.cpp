#include<iostream>
using namespace std;
class Phone
{
private:
	int storage;
	string prand;
	int price;
public:
	void set_prand(string A)
	{
		prand = A;
	}
	void set_storage(int S)
	{
		storage = S;
	}
	void set_price(int P)
	{
		price = P;
	}
	string get_prand()
	{
		return prand;
	}
	int get_storage()
	{
		return storage;
	}
	int get_price()
	{
		return price;
	}
};
int main()
{
	Phone P1;
	P1.set_prand("iphone");
	P1.set_storage(5000);
	P1.set_price(10000);
	cout << "The Prand:" <<P1.get_prand() << "\n";
	cout << "The Storage:" << P1.get_storage() << "\n";
	cout << "The Price \'s:" << P1.get_price() << "\n";
	return 0;
}