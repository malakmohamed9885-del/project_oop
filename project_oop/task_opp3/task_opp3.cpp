                                         //TASK_DOCTOR
#include<iostream>
using namespace std;
struct Doctor
{
    string name;
    string Email;
    string phone;
    string subject;
};
int main()
{
    Doctor s1;
    s1.name = "Dr.sarah";
    s1.Email = "sarah@gmail.com";
    s1.phone = "01008765432";
    s1.subject = "CS";

    Doctor s2;
    s2.name = "Dr.Amer";
    s2.Email = "Amer@gmail.com";
    s2.phone = "01008111111";
    s2.subject = "00P";

    cout << "The Name \'s:" << s1.name << "\n";
    cout << "Email \'s:" << s1.Email << "\n";
    cout << "The Phone \'s:" << s1.phone << "\n";
    cout << "subject \'s:" << s1.subject << "\n";
    cout << "=================\n";
    cout << "The Name \'s:" << s2.name << "\n";
    cout << "Email \'s:" << s2.Email << "\n";
    cout << "The Phone \'s:" << s2.phone << "\n";
    cout << "subject \'s:" << s2.subject << "\n";
    return 0;
}