#include <iostream>
using namespace std;
class stu       //base
{
protected:
    int id;
    char name[20];
public:
    void getstu()
    {
        cout<<"Enter ID: "<<endl;
        cin>>id;
        cout<<"Enter Name: "<<endl;
        cin>>name;
    }
    void putstu()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
class marks:public stu
{
protected:
    int m,p,c;
public:
    void getmarks()
    {
        cout<<"Enter 3 subject marks for "<<name<<": "<<endl;
        cin>>m>>p>>c;
    }
};
class sports
{
protected:
    int spmarks;
public:
    void getsports()
    {
        cout<<"Enter sports marks: "<<endl;
        cin>>spmarks;

    }
};
class result:public marks, public sports
{
    int tot,avg,coun;
public:
    void show()
    {
        coun=0;
        tot=m+p+c;
        avg=tot/3;
        cout<<"Total is: "<<tot<<endl;
        cout<<"Average is: "<<avg<<endl;
        cout<<" Average + Sports Marks: "<<avg+spmarks<<endl;
        if(spmarks<33)
        {
            cout<<"Child failed in Sports! "<<endl;
            coun=+1;
        }
        if(m<33)
        {
            cout<<"Child failed in Subject 1! "<<endl;
            coun=+1;
        }
        if(p<33)
        {
            cout<<"Child failed in Subject 2! "<<endl;
            coun=+1;
        }

        if(c<33)
        {
            cout<<"Child failed in Subject 3! "<<endl;
            coun=+1;
        }
    if(coun==0)
    {
        cout<<"Congratulations! You Passed with Flying Colours!"<<endl;
    }
    else
    {
        cout<<"Unfortunately the child failed in "<<coun<<" subject(s)"<<endl;
    }
}
};
int main()
{
    result r;
    r.getstu();
    r.getsports();
    r.getmarks();
    r.putstu();
    r.show();
    return 0;
}
