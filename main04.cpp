#include <iostream>

using namespace std;

void fibonacci(int n1, int n2, int n)
{
    if(n!=0)
    {
        cout<<n1+n2<<endl;
        n--;
    }
    fibonacci(n2,n1+n2,n);
}

int main()
{
    int n;
    cout<<"Enter the numbers of terms in the fibinacci series to be printed : ";
    cin>>n;
    cout<<0<<endl<<1<<endl;
    fibonacci(0,1,n-2);
    return 0;
}
