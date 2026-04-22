                                  // TASK_SUMNUMBER
#include<iostream>
using namespace std;
class Distract
{
public:
    static int Add(int n1, int n2, int n3) {
        int result;
        result = n1 + n2 + n3;
        //cout<<"result1 \'s : " << result;
        return result;
    };
    static int Malti(float n1, double n2, int n3) {
        double result;
        result = n1 * n2 * n3;
        //cout<<"result \'s : " << result;
        return result;
    };
    static int sub(int n1, float n2, int n3) {
        float result;
        result = n1 - n2 - n3;
        //cout<<"result1 \'s : " << result;
        return result;
    };
};
int main() {
    int  add;
    add = Distract::Add(22, 334, 44);
    cout << "The calculator Addition number \'s : " << Distract::Add(22, 334, 44) << "\n";
    ///////////////////////////////////////////////////////////////
    int  Maltiply;
    add = Distract::Malti(20, 11, 10);
    cout << "The calculator Maltiply number \'s : " << Distract::Malti(20, 11, 10) << "\n";
    ////////////////////////////////////////////////////////////////
    int  sub;
    add = Distract::sub(150, 20, 60);
    cout << "The calculator subtact number \'s : " << Distract::sub(150, 20, 60) << "\n";
    return 0;
}