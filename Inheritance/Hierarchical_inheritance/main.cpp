#include <iostream>
using namespace std;
class room
{
protected:
    int area,bhk;
public:
    void getro()
    {
        cout<<"Enter Area: "<<endl;
        cin>>area;
        cout<<"Enter BHK: "<<endl;
        cin>>bhk;
    }
    void putro()
    {
        cout<<"Area is: "<<area<<endl;
        cout<<"BHK is: "<<bhk<<endl;
    }
};
class people:public room
{
protected:
    int age;
    char name[20];
public:
    void getp()
    {
        cout<<"Person with "<<area<<"area and "<<bhk<<" BHK: "<<endl;
        cout<<"Enter Age: "<<endl;
        cin>>age;
        cout<<"Enter Name: "<<endl;
        cin>>name;
    }
    void putp()
    {
        cout<<"Age: "<<age<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
class building:public people
{
    int n;
    public:
    void show()
    {
        n=area*bhk*1750*3;
        cout<<"Cost of the building is: "<<n<<endl;
    }
};
int main()
{
    building b;
    b.getro();
    b.getp();
    cout << "Display: " << endl;
    b.putro();
    b.putp();
    b.show();
    return 0;
}
