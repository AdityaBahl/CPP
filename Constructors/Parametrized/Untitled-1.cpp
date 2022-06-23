#include <iostream>
using namespace std;
class vegetable
{
    int money, number;

public:
    vegetable(int, int); //declaration of constructor
    void display()
    {
        cout << "money = " << money << endl;
        cout << "number = " << number << endl;
    }
};
vegetable::vegetable(int x, int y) //constructor Defined
{
    money = x;
    number = y;
}
int main()
{
    vegetable veg1(0, 100);             //implicitly called constructor
    vegetable veg2 = vegetable(25, 75); //explicitly called constructor
    cout << endl
         << "Object 1 " << endl;
    veg1.display();
    cout << endl
         << "Object 2 " << endl;
    veg2.display();
    return 0;
}