                                  //TASK_BANKACCOUNT
#include<iostream>
using namespace std;
class BankAccount
{
private:
    string username;
    int password = 12345;
    int AccountNumber = 1001;
    int Balance;
    string phone;
    string Email;

public:
    void setusername(string N)
    {
        username = N;
        cout << "The Name \'s:" << N << "\n";
    }
    void setpassword(int P)
    {
        if (P == password)
        {
            cout << "Password \'s:" << P << "\n";
        }
        else
        {
            cout << "Error\n";

        }
    }
    void setAccountNumber(int A_C)
    {
        if (A_C == AccountNumber)
        {
            cout << "Account Number \'s:" << A_C << "\n";
        }
        else
        {
            cout << "Error\n";
        }
    }
    void setBalance(int B)
    {
        Balance = B;
        cout << "Balance \'s:" << B << "\n";;
    }
    void setPhone(string P)
    {
        phone = P;
        cout << "Phone \'s:" << P << "\n";
    }
    void setEmail(string E)
    {
        Email = E;
        cout << "Email \'s:" << E << "\n";
    }
};
int main() {
    BankAccount user1;
    user1.setusername("Sara");
    user1.setEmail("Sara@gmail.com");
    user1.setPhone("01005678905");
    user1.setpassword(12345);
    user1.setBalance(100000);
    user1.setAccountNumber(1001);
    return 0;
}