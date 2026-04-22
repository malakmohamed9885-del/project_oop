#pragma once
#include "person.h"
class student : public person
{
private:
	float GPA;
	int ID;
	int Level;
	public:
	void set_gpa(float g);
	void set_id(int i);
	void set_level(int l);
	float get_gpa();
	int get_id();
	int get_level();
	void get();
};

