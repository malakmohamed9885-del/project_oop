#pragma once
#include<iostream>
using namespace std;
class person
{
private:
	string name;
	string address;
	string phone;
	int age;
public:
	void set_name(string N) ;
	void set_address(string Ad);
	void set_phone(string P) ;
	void set_age(int A);
	string get_name() ;
	string get_address() ;
	string get_phone() ;
	int get_age() ;
	void result();
};

