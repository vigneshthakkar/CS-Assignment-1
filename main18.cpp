#include <iostream>
#include<fstream>

using namespace std;

class person
{
    char name[20];
    char address[100];
    char phone[15];

    public:

    void input()
    {
        cout<<"Name : ";
        cin.getline(name,20);
        cout<<"Address : ";
        cin.getline(address,100);
        cout<<"Phone Number : ";
        cin.getline(phone,15);
    }

    void output()
    {
        cout<<"name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Phone Number : "<<phone<<endl;
    }
};

void filewrite(int n)
{
    ofstream file("person.dat",ios::out|ios::binary);
    person p;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the details of person "<<i+1<<" : "<<endl;
        p.input();
        file.write((char*)&p,sizeof(person));
    }
}

void fileread(int n)
{
    ifstream file("person.dat",ios::in|ios::binary);
    person p;
    for(int i=0;i<n;i++)
    {
        cout<<"Details of person "<<i+1<<" : "<<endl;
        file.read((char*)&p,sizeof(person));
        p.output();
    }
}

int main()
{
    int n;
    cout<<"Entre the number of persons : ";
    cin>>n;
    cin.ignore();
    filewrite(n);
    fileread(n);
    return 0;
}
