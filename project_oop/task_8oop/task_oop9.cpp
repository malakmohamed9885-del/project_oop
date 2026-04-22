#include<iostream>
using namespace std;
#include"person.h"
#include"student.h"
int main() {
	person p1;
	p1.set_name("malak");
	p1.set_address("Egypt");
	p1.set_phone("0100");
	p1.set_age(19);
	p1.result();
	student s1;
	s1.set_name("malak");
	s1.set_address("Egypt");
	s1.set_phone("0100");
	s1.set_age(19);
	
	s1.set_gpa(3.9);
	s1.set_id(3456);
	s1.set_level(1);
	s1.get();
	return 0;
}