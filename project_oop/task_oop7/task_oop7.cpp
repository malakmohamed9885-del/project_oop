                                             //TASK_STUDENT
#include<iostream>
using namespace std;
class student
{
private:
	string name;
	string phone;
	string address;
	float gpa;
	int id;
public:
	static int count;
	void setname(string N)
	{
		name = N;
    }
	string getname()
	{
		cout << "The name \'s: " << name << "\n";
		count++;
		return name;
	}
	void setaddress(string A)
	{
		address = A;
	}
	string getaddress()
	{
		cout << "The address \'s: " << address << "\n";
		return address;
	}
	void setphone(string P)
	{
		phone = P;
	}
	string getphone()
	{
		cout << "the phone \'s: " << phone << "\n";
		return phone;
	}
	void setgpa(float G)
	{
		gpa = G;
	}
	float getgpa()
	{
		cout << "The gpa \'s:"<< gpa << "\n";
		return gpa;
	}
	void setid(int I)
	{
		id = I;
	}
	int getid()
	{
		cout << "the id \'s: "<<id<<"\n";
		return id;
	}
	int getcount()
	{
		cout << "counter \'s: " << count << "\n";
		return count;
	}
 };
int student::count = 0;
int main()
{
	student S1;
	S1.setname("Malak");
	S1.setaddress("Egypt");
	S1.setphone("0100");
	S1.setgpa(3.9);
	S1.setid(2468);
	S1.getname();
	S1.getaddress();
	S1.getphone();
	S1.getid();
	S1.getgpa();
	S1.getcount();
	cout << "==============================" << "\n";
	student S2;
	S2.setname("Maraam");
	S2.setaddress("Egypt");
	S2.setphone("0100");
	S2.setgpa(3.9);
	S2.setid(2765);
	S2.getname();
	S2.getaddress();
	S2.getphone();
	S2.getid();
	S2.getgpa();
	S2.getcount();
	cout << "==============================" << "\n";
	student S3;
	S3.setname("Nada");
	S3.setaddress("Egypt");
	S3.setphone("0100");
	S3.setgpa(3.9);
	S3.setid(1111);
	S3.getname();
	S3.getaddress();
	S3.getphone();
	S3.getid();
	S3.getgpa();
	S3.getcount();
	cout << "==============================" << "\n";
	student S4;
	S4.setname("shahd");
	S4.setaddress("Egypt");
	S4.setphone("0100");
	S4.setgpa(3.9);
	S4.setid(8743);
	S4.getname();
	S4.getaddress();
	S4.getphone();
	S4.getid();
	S4.getgpa();
	S4.getcount();
	cout << "==============================" << "\n";
	student S5;
	S5.setname("Nedaa");
	S5.setaddress("Egypt");
	S5.setphone("0100");
	S5.setgpa(3.9);
	S5.setid(2974);
	S5.getname();
	S5.getaddress();
	S5.getphone();
	S5.getid();
	S5.getgpa();
	S5.getcount();

	return 0;
}