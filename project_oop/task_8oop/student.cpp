#include "student.h"

void student::set_gpa(float g)
{
	GPA = g;
}

void student::set_id(int i)
{
	ID = i;
}

void student::set_level(int l)
{
	Level = l;
}

float student::get_gpa()
{
	return GPA;
}

int student::get_id()
{
	return ID;
}

int student::get_level()
{
	return Level;
}

void student::get()
{
	result();
	cout << "ID:" << get_id() << "\t" << "Level:" << get_level()<<"\t" << "GPA:" << get_gpa()<<"\n";
}
