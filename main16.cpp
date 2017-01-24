#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of names : ";
    cin>>n;
    char a[n][100];
    cout<<"Enter the names : "<<endl;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(strcmp(a[i],a[j])>0)
            {
                char temp[100];
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
    cout<<"The names in alphabetical order is : "<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<endl;
    return 0;
}
