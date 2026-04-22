#include<iostream>
using namespace std;
class student
{
private:
	string name;
	int id;
	float grade;
public:
	void set_name(string N)
	{
		name = N;
	}
	void set_id(int I)
	{
		id= I;
	}
	void set_grade(float G)
	{
		grade= G;
	}
	string get_name()
	{
		return name ;
	}
	int get_id()
	{
		return id;
	}
	float get_grade()
	{
		return grade;
	}
};
int main()
{
	student S1;
	S1.set_name("Malak");
	S1.set_grade(3.9);
	S1.set_id(8764);
	cout << "Name is:" << S1.get_name() << "\n";
	cout << "The grade is:" << S1.get_grade() << "\n";
	cout << "ID is:" << S1.get_id() << "\n";
	return 0;
}