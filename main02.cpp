#include <iostream>
#include<math.h>

using namespace std;

long factorial(int a,long fact)
{
    return fact*a;
}

int main()
{
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    double sum; long fact=1;
    for(int i=1;i<=n;i++) sum+=(pow(i,i)/factorial(i,fact));
    cout<<"The sum is "<<sum<<endl;
    return 0;
}
