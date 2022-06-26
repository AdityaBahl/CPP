#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
class stu
{
    int id;
    char name[100];
public:
    void getstu()
    {
        cout<<"Enter ID and Name:";
        cin>>id>>name;
    }
    void putstu()
    {
        cout<<id<<" is the id"<<endl;
        cout<<name<<" is the name"<<endl;
    }
};
int main()
{
    stu s;
    //ofstream file("stu.dat");//ofstream to write data, ( this method is also called parameterized constructor)
    ofstream file("stu.dat, ios::outz"); // can also be opened like this
    //ofstream file; //object
    //file.open("stu.dat"); //opening opening with this method(using open member function)
    char op;
    do{
        s.getstu();
        file.write((char *  )&s,sizeof(s));
        cout<<"One Row Created"<<endl;
        cout<<"Any More?(y/n)"<<endl;
        cin>>op;
        system("cls");
        s.putstu();
        file.read((char *)&s, sizeof(s));
    }while(op=='y'||op=='Y');
    file.close();
    return 0;
}
