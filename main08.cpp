#include <iostream>

using namespace std;

int main()
{
    int a[10];
    cout<<"Enter 10 numbers : ";
    for(int i=0;i<10;i++) cin>>*(a+i);
    int greatest,smallest;
    for(int i=0;i<10;i++)
        for(int j=i;j<10;j++)
            if(*(a+i)>*(a+j))
            {
                int temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
    cout<<"Greatest : "<<*a<<endl;
    cout<<"Smallest :"<<*(a+9)<<endl;
    cout<<"In ascending  order : ";
    for(int i=0;i<10;i++) cout<<*(a+i)<<" ";
    cout<<endl<<"In desecding order : ";
    for(int i=9;i>=0;i--) cout<<*(a+i)<<" ";
    cout<<endl;
    return 0;
}
