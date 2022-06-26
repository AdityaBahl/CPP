#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
class stu
{
    int id;
    char name[20];
public:
    void getstu()
    {
        cout<<"Enter ID and Name: "<<endl;
        cin>>id>>name;
    }
    void putstu()
    {
        cout<<"ID: "<<id<<endl<<"Name: "<<name<<endl;
    }
};

int main()
{
    int n;
    stu s;
    ifstream file("stu.dat",ios::in);
    file.read((char*)&s,sizeof(s));
    cout<<"How Many Entries to Input?"<<endl;
    cin>>n;
    while(n--)
    {
        s.getstu();
    }
    while(!file.eof())
    {
        s.putstu();
        file.read((char *)&s,sizeof(s));
    }
    file.close();
    return 0;
}
