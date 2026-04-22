#include "Rectangle.h"

void Rectangle::setlength(float l)
{
	length = l;
}

float Rectangle::getlength()
{
	return length;
}

void Rectangle::setwidth(float w)
{
	width = w;
}

float Rectangle::getwidth()
{
	return width;
}

float Rectangle::getAree()
{
	return length*width;
}

