//prime or not using parameterized constructor

#include <iostream>
using namespace std;
class prime
{
    public:
    prime(int n);
};
int main()
{
    int n;
    cout << "Enter the number :";
    cin>>n;
    prime obj(n);
    return 0;
}
prime::prime(int n)
{
    int i,c=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
           c=c+1;
        }
    }
    if(c!=0)
    {
        cout << "The number is not prime" << endl;
    }
    else
    {
        cout << "The number is prime" << endl;
    }
}
