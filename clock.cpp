#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int h, m, s, a, err;
    err=a=0;
    while(err==0)
    {
        cout<<"Enter current hour: "<<endl;
        cin>>h;
        cout<<"Enter current minute: "<<endl;
        cin>>m;
        cout<<"Enter current second: "<<endl;
        cin>>s;
        if(h<24 && m<60 && s<60)
            err++;
        else
            system("cls");
    }
    while(a==0)
    {
        system("cls");
        cout<<h<<":"<<m<<":"<<s<<endl;
        Sleep(1000);
        s++;
        if(s>59)
        {
            s=0;
            m++;
        }
        if(m>59)
        {
            m=0;
            h++;
        }
        if(h>23)
        {
            h=0;
        }
    }
    return 0;
}
//C:\Users\Lenovo\OneDrive - Manipal Academy of Higher Education\Documents\Projects\cppProjects