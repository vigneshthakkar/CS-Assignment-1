#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c;
    double x,y;
    cout<<"The quadratic equation is of the form ax^2 + bx + c = 0"<<endl;
    cout<<"Enter the coefficients : "<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;
    long d=b*b-4*a*c;
    if(d<0)
    {
        x=-b/(2*a);
        y=pow(-d,1/2)/(2*a);
        cout<<"The roots of the equation are : "<<endl;
        cout<<x<<" + i"<<y<<endl;
        cout<<x<<" - i"<<y<<endl;
    }
    else
    {
        x=(-b + pow(d,1/2))/(2*a);
        y=(-b - pow(d,1/2))/(2*a);
        cout<<"The roots of the equation are : "<<endl;
        cout<<x<<endl;
        cout<<y<<endl;
    }
    return 0;
}
