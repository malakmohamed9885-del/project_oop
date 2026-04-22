#include "person.h"

void person::set_name(string N)
{
	name = N;
}

void person::set_address(string Ad)
{
	address = Ad;
}

void person::set_phone(string P)
{
	phone = P;
}

void person::set_age(int A)
{
	age = A;
}

string person::get_name()
{
	return name;
}

string person::get_address()
{
	return address;
}

string person::get_phone()
{
	return phone;
}

int person::get_age()
{
	return age;
}
 void person::result()
{
	cout << "name \'s:" << get_name() << "\t" << "address:" << get_address()<<"\t" << "phone:" << get_phone()<<"\t" << "age:" << get_age()<<"\n";
}
