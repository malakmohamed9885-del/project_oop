#include<iostream>
using namespace std;
class shape
{
private:
	 int area;
	 string type;
public:
	 void set_area(int A)
	{
		area = A;
	}
	void set_type(string T)
	{
		type = T;
	}
	virtual int result()
	{
		return area;
	}
	virtual string print()
	{
		return type;
	}
	void get()
	{
		cout << "area: " << result() << "\n";
		cout << "type: " << print() << "\n";
	}
};
class rectangle:public shape
{
private:
	int length;
	int width;
	string type;
public:
	rectangle(int l,int w,string T)
	{
		length = l;
		width = w;
		type = T;
	}
	int result()
	{
		return width * length;
	}
	string print()
	{
		return type;
	}
};
class circle :public shape
{
private:
	int higth;
public:
	void set_higth(int h)
	{
		higth = h;
	}
	int get_area()
	{
		return 2 * 22 / 7 * higth;
	}
};
int main() {
	shape* shape_ptr;
	rectangle rec(10, 60, "black");
	shape_ptr = &rec;
	shape_ptr->get();
	
}