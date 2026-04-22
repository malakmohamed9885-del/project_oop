#include<iostream>
using namespace std;
class Book
{
private:
	string author;
	string title;
	int price;
public:
	void set_author(string A)
	{
		author = A;
	}
	void set_title(string T)
	{
		title = T;
	}
	void set_price(int P)
	{
		price = P;
	}
	string get_author()
	{
		return author;
	}
	string get_title()
	{
		return title;
	}
	int get_price()
	{
		return price;
	}
};
int main()
{
	Book B1;
	B1.set_author("Bjarne Stroustrup");
	B1.set_title("The C++ Programming Language");
	B1.set_price(1900);
	cout << "The Author name:" << B1.get_author() << "\n";
	cout << "The Titel Name:" << B1.get_title() << "\n";
	cout << "The Price \'s:" << B1.get_price() << "\n";
	return 0;
}