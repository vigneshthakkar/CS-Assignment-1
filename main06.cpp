#include <iostream>
#include<math.h>

using namespace std;

long armstrong(int a)
{
    int sum=0;
    while(a>0)
    {
        sum+=pow(a%10,3);
        a/=10;
    }
    return sum;
}

int main()
{
    int a,b;
    cout<<"Enter the number : ";
    cin>>a;
    b=armstrong(a);
    if(a==b) cout<<"The number is Armstrong"<<endl;
    else cout<<"The number is not a Armstrong"<<endl;
    return 0;
}
