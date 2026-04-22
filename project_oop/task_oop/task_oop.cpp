#include<iostream>
using namespace std;
class student
{
private:
	string name;
	string address;
	string phone;
	int id;
	float gpa;
public:
	void setname(string n)
	{
		name = n;
		cout << "my name \'s:" << name << "\n";
	}
	void setaddress(string a)
	{
		address = a;
		cout << "The address \'s:" << address << "\n";
	}
	void setphone(string p)
	{
		phone = p;
		cout << "The phone \'s:" << phone << "\n";
	}
	void setid(int i)
	{
		id = i;
		cout << "The id \'s:" << id << "\n";
	}
	void setgpa(float g)
	{
		gpa = g;
		cout << "The id \'s:" << gpa << "\n";
	}
};
int main()
{
	student st1;
	st1.setname("malak");
	st1.setaddress("Egypt");
	st1.setphone("0100");
	st1.setid(1234);
	st1.setgpa(3.37);
	return 0;
}