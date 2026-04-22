                                        //TASK_ADDNUMBER
#include<iostream>
using namespace std;
struct number
{
    int x;
    double y;
    float z;
};
number add(number n1, number n2)
{
    number result;
    result.x = n1.x + n2.x;
    result.y = n1.y + n2.y;
    result.z = n1.z + n2.z;
    return result;
};
int main() {
    number n1, n2;
    n1.x = 2;      n2.x = 8;
    n1.y = 3.5;    n2.y = 5.9;
    n1.z = 5.9999;     n2.z = 7.3333;
    number R = add(n1, n2);
    cout << "X:" << R.x << "\n";
    cout << "Y:" << R.y << "\n";
    cout << "z:" << R.z << "\n";
    return 0;
}