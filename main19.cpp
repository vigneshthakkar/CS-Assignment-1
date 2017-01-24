#include <iostream>
#include<fstream>

using namespace std;

class person
{
    char name[20];
    char address[100];
    char phone[15];
    float exp;

    public:

    float getexp()
    {
        return exp;
    }

    void input()
    {
        cout<<"Name : ";
        cin.getline(name,20);
        cout<<"Address : ";
        cin.getline(address,100);
        cout<<"Phone Number : ";
        cin.getline(phone,15);
        cout<<"Work Experience : ";
        cin>>exp;
        cin.ignore();
    }

    void output()
    {
        cout<<"name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Phone Number : "<<phone<<endl;
    }
};

int filewrite(int n,float minexp)
{
    ofstream file("person.dat",ios::out|ios::binary);
    person p; int count=0;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the details of person "<<i+1<<" : "<<endl;
        p.input();
        if(p.getexp()>=minexp)
        {
            file.write((char*)&p,sizeof(person));
            count++;
        }
    }
    return count;
}

int fileappend(int n, float minexp)
{
    ofstream file("person.dat",ios::app|ios::binary);
    person p; int count=0;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the details of person "<<i+1<<" : "<<endl;
        p.input();
        if(p.getexp()>=minexp)
        {
            file.write((char*)&p,sizeof(person));
            count++;
        }
    }
    return count;
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
    int n; float minexp;
    cout<<"Enter the number of persone initially persent : ";
    cin>>n;
    cout<<"Enter the minimun exp required : ";
    cin>>minexp;
    n=filewrite(n,minexp);
    int n1;
    cout<<"Enter the persons who applied later : ";
    cin>>n1;
    n+=fileappend(n,minexp);
    fileread(n);
    return 0;
}
