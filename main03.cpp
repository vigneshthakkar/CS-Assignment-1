#include <iostream>

using namespace std;

int main()
{
    int positive=0,negative=0,zeros=0;
    cout<<"Enter 20 numbers :";
    for(int i=0;i<20;i++)
    {
        int a;
        cin>>a;
        if(i>0) positive++;
        else if(i<0) negative++;
        else zeros++;
    }
    cout<<"Positive numbers : "<<positive<<endl;
    cout<<"Negative numbers : "<<negative<<endl;
    cout<<"Zeros : "<<zeros<<endl;
    return 0;
}
