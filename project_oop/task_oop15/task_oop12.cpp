#include<iostream>
using namespace std;
class person
{
private:
	string name;
	string phone;
	string address;
	string email;
public:
	person(string n, string a, string e, string ph) :name(n), address(a), email(e), phone(ph) {};
	virtual void print()
	{
		cout << "name is: " << name << "\t" << "The address is: " << address << "\t" << "The email is: " << email << "\t" << "The phone is: " << phone << "\n";
	}
};
	class employee :public person
	{
	private:
		int salary;
		int id;
	public:
		employee(string n, string a, string e, string ph, int s, int i) :person(n, a, e, ph)
		{
			salary = s;
			id = i;
		}
		void print() {
			person::print();
			cout << "salary is: " << salary << "\t" << "the id: " << id << "\n";
		}
	};
	class student :public person
	{
	private:
		int gpa;
		int id;
	public:
		student(string n, string a, string e, string ph, int g, int I) :person(n, a, e, ph)
		{
			gpa = g;
			I = id;
		}
		void print()
		{
			person::print();
			cout << "gpa is: " << gpa << "\t" << "id is: " << id;
		}
	};
	int main() {
		person* per_ptr;
		employee p1("Malak", "ejypt", "malak@gamil.com", "01000000000", 5000, 2321);
		student s1("Malak", "ejypt", "malak@gamil.com", "01000000000", 4, 836537);
		per_ptr = &p1;
		per_ptr->print();
		per_ptr = &s1;
		per_ptr->print();
		return 0;
	}
