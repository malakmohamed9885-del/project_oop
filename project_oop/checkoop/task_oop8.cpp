                                      //TASK_PRODUCT
#include<iostream>
using namespace std;
struct product
{
public:
	string name;
	float expries;
	double prise;
};
int main() {
	product arry[4];
	arry[0].name = "mena";
	arry[1].expries = 22.11;
	cout << arry[0].name << ": " << arry[1].expries;
	return 0;
}
