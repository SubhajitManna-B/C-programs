//Sum of two number using c++

#include<iostream>
//#include<conio.h>
using namespace std;
class sum
{
    public:
    int a,b;
    int cal();
};
int main()
{
    sum obj;
    obj.cal();
    return(0);
}
int sum::cal()
{
    int s;
    cout << "Enter the value of a&b" << endl;
    cin>>a>>b;
    s=a+b;
    cout<<"The sum = "<<s;
}
