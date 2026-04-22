#include<iostream>
using namespace std;
class person
{
private:
	string name;
	string address;
	string phone;
	string gender;
	int age;
public:
	person(string N, string Ad, string P, string G, int A)
	{
		name = N;
		address = Ad;
		phone = P;
		gender = G;
	}
	void setname(string N)
	{
		name = N;
	}
	void setaddress(string Ad)
	{
		address = Ad;
	}
	void setphone(string P)
	{
		phone = P;
	}
	void setgender(string G)
	{
		gender = G;
	}
	void setage(int A)
	{
		age = A;
	}
	void get()
	{
		cout << "name \'s: " << name << "\t" << "address \'s: " << address << "\t" << "gender \'s:" << gender << "\t" << "phone \'s: " << phone << "\t" << "age \'s:" << age << "\n";
	}
};
int main()
{
	person p1;
	p1.setname("malak");
	p1.setaddress("Egypt");
	p1.setgender("female");
	p1.setphone("0100");
	p1.setage(19);
	p1.get();
	return 0;
}