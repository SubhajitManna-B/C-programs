//Check a year leap year or not using copy constructor.

#include <iostream>
using namespace std;
class leap
{
public:
    int y;//member variable
    leap(int year);
    leap(leap &obj);
};

int main()//main part
{
    int year;
    cout << "Enter the year : ";
    cin>>year;
    leap obj1(year);
    leap obj2=obj1;
    return 0;
}

leap::leap(int year)
{
    y=year;
    if(year%400==0 || year%100!=0 && year%4==0)
        cout<<"The year " <<year <<" is leap year" <<endl;
    else
        cout<<"The year " <<year <<" is not leap year"  <<endl;
}

leap::leap(leap &obj)
{
    if(obj.y%400==0 || obj.y%100!=0 && obj.y%4==0)
        cout<<"The year " <<obj.y <<" is leap year"  <<endl;
    else
        cout<<"The year " <<obj.y <<" is not leap year"  <<endl;
}
