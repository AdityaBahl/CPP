// update (29/12/21): Default constructor in class derived not working
// update (30/12/21): Due to it not being declared without parameter, derived default constructor wont get called, on the other hand, base being
//                    a parent class, gets all of its object and functions called in derived, automatically.
#include <iostream>
#include<cstring>
using namespace std;
class base
{
protected:
    char name[20];
public:
    base()
    {
        cout<<"Default constructor in class base"<<endl;
    }
    base(char name[20])
    {
        strcpy(this->name,name);
        cout<<"parameterized constructor in class base"<<endl;
    }
    void shows()
    {
        cout<<name<<" is the name"<<endl;
    }
};
class derived:public base
{
public:
    derived()
    {
        cout<<"Default constructor in class derived"<<endl;
    }
    derived(char name[20])
    {
        base b(name);
        cout<<"Parameterized constructor in class derived"<<endl;
    }
    void showder()
    {
        cout<<name<<" is the name"<<endl;
    }
};
int main()
{
    derived d("Aditya");

   // d.shows();
   // d.showder();
    return 0;
}
