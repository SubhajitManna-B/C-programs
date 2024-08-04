//LEAP YEAR using default constructor

#include <iostream>
using namespace std;
class leap
{
public:
    int year;
    leap();
};
int main()
{
    leap obj;
    return 0;
}
  leap::leap()
{
    cout << "Enter the year : ";
    cin >> year;
    if(year%400==0 || year%100!=0 && year%4==0)
        cout<<"The year is leap year"<<endl;
    else
    {
        cout << "The year is not leap year" << endl;
    }
}
