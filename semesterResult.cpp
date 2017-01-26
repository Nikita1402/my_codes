#include<iostream>
using namespace std;
class student
{
protected:
int rollno;
char name[100];
public:
void details()
{
cout<<"enter the rollno\n";
cin>>rollno;
cout<<"enter the name\n";
cin>>name;
}
};
class sem1:public student
{
protected:
int sub1,sub2,sub3,t,p;
public:
sem1()
{
cout<<"enter marks of sub 1\n";
cin>>sub1;
cout<<"enter marks of sub 2\n";
cin>>sub2;
cout<<"enter marks of sub 3\n";
cin>>sub3;
}
void total()
{
cout<<"marks of student are:\n";
cout<<"in sub 1:"<<sub1<<endl;
cout<<"in sub 2:"<<sub2<<endl;
cout<<"in sub 3:"<<sub3<<endl;
t=(sub1+sub2+sub3);
p=t/3;
cout<<"total marks of student are:-\n"<<t<<endl;
cout<<"total percentage of student is\n"<<p<<endl;
}
};
class sem2:public sem1
{
protected:
    int sub11,sub22,sub33,to,pe,tt;
public:
    sem2()
    {
        cout<<"enter marks of sub 11\n";
        cin>>sub11;
        cout<<"enter marks of sub 22\n";
        cin>>sub22;
        cout<<"enter marks of sub 33\n";
        cin>>sub33;
    }
    void total1()
    {
 total();
        cout<<"marks in sub1 of sem 2:"<<sub11<<endl;
        cout<<"marks in sub2 of sem 2:"<<sub22<<endl;
        cout<<"marks in sub3 of sem 2:"<<sub33<<endl;
        to=sub11+sub22+sub33;
        tt=to+t;
        pe=tt/6;
        cout<<"total marks are:"<<tt<<endl;
        cout<<"percentage is:"<<pe<<endl;
    }
};
class sem3:public sem2
{
protected:
    int sub111,sub222,sub333,tot,per,c;
public:
    sem3()
    {
        cout<<"enter marks of sub 1\n";
        cin>>sub111;
        cout<<"enter marks of sub 2\n";
        cin>>sub222;
        cout<<"enter marks of sub 3\n";
        cin>>sub333;
    }
    void total3()
    {
        total1();
        cout<<"marks in sub1 of sem 2:"<<sub111<<endl;
        cout<<"marks in sub2 of sem 2:"<<sub222<<endl;
        cout<<"marks in sub3 of sem 2:"<<sub333<<endl;
        tot=sub111+sub222+sub333;
        c=tt+tot;
        per=(c*100)/900;
        cout<<"total marks are:"<<c<<endl;
        cout<<"percentage is:"<<per<<endl;
    }
};
int main()
{
sem3 a2;
     int c;
     char ch;
     b:
    cout<<"enter 1 for sem 1 results\n";
    cout<<"enter 2 for sem 2 results\n";
    cout<<"enter 3 for sem 3 results\n";
    cin>>c;
    cout<<"--------RESULT OF SEM "<<c<<" IS-----------"<<endl;
if(c==1)
a2.total();
else if(c==2)
a2.total1();
else if(c==3)
a2.total3();
else
    cout<<"wrong info\n";
cout<<"press y to continue.";
cin>>ch;
if(ch=='y')
    goto b;
return 0;
}

