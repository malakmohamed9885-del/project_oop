                                      //TASK_CAR
#include<iostream>
using namespace std;
class car
{
private:
    int price;
    int model;
    string coluer;
    string type;
public:
    void set_price(int P)
    {
        if (price > 100000) {
            price = P;
        }
        else{
            cout << "problem \n";
        }
    }
    void set_model(int M)
    {
        model = M;
    }
    void set_coluer(string C)
    {
        coluer = C;
    }
    void set_type(string T)
    {
        type = T;
    }
    int get_price()
    {
        return price;
    }
    int get_model()
    {
        return model;
    }
    string get_coluer()
    {
        return coluer;
    }
    string get_type()
    {
        return type;
    }
};
int main()
{
    car C1;
    C1.set_price(50000);
    C1.set_model(2026);
    C1.set_coluer("black");
    C1.set_type("tesla");
    cout << "Car Type:" << C1.get_type() << "\n";
    cout << "couler \'s:" << C1.get_coluer() << "\n";
    cout << "model \'s:" << C1.get_model() << "\n";
    cout << "Price \'s:" << C1.get_price() << "\n";
    return 0;
}