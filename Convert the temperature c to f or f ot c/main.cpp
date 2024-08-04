//Convert the temperature c to f or f to c using object

#include <iostream>
using namespace std;
class temp
{
    public:
    int tem,ch;
    int conv();
};
int main()
{
    temp obj;
     obj.conv();
     return(0);
}
int temp::conv()
{
    int c,f;
    cout<<"Enter 1 for convert the temperature Fahrenheit to Celsius \n Enter 2 for convert temperature Celsius to Fahrenheit"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout <<"Enter the temperature in Fahrenheit : ";
        cin>>tem;
        c=((tem-32)*5)/9;
        cout <<"The temperature in Celsius is : " <<c <<endl;
        break;
    case 2:
        cout <<"Enter the temperature in Celsius : ";
        cin>>tem;
        f=((9*tem)/5)+32;
        cout <<"The temperature in Fahrenheit is : " <<f <<endl;
        break;
    default:
        cout <<"You entered the wrong choice, pls re-entere the choice."<<endl;
    }
}

