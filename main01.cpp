#include <iostream>

using namespace std;

long factorial(int a)
{
    if(a==2) return 2;
    else return a*factorial(a-1);
}

int main()
{
    int a;
    long fact;
    cout<<"Enter a number : ";
    cin>>a;
    fact=factorial(a);
    cout<<"Factorial of the number is "<<fact<<endl;
    return 0;
}
