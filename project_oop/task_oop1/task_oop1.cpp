                          //TASK_RECTANGLE

#include <iostream>
using namespace std;
#include "Rectangle.h"
int main()
{
    Rectangle R1;
    R1.setlength(12.2);
    R1.setwidth(14.3);
    cout << R1.getlength() << "\n";
    cout << R1.getwidth() << "\n";
    cout << R1.getAree() << "\n";
    return 0;
}