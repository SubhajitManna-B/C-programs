

#include <iostream>
#include<math.h>
using namespace std;
class cal
{
public:
    cal(float r);
    cal(float a,float b,float c);
};
int main()
{
    float r,a,b,c;
    cout << "Enter the value of radious : ";
    cin>>r ;
    cal obj1(r);
    cout << "Enter the value of a,b,c : ";
    cin>>a>>b>>c;
    cal obj2(a,b,c);
    return 0;
}
cal::cal(float r)
{
    float area;
    area=(22/7)*pow(r,2);
    cout << "The area of circle = " <<area <<endl;
}
cal::cal(float a,float b,float c)
{
    float s,area2;
    s=(a+b+c)/2;
    area2=sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "The area of triangle = " <<area2 <<endl;
}

