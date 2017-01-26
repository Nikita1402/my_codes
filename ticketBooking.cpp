#include <iostream>
using namespace std;
class abc
{
 private:
 static int gold,silver;
 int go,si;
 static int rgold,rsilver;
 public:
 inline void user_info()
 {
  cout<<"enter the number of gold tickets you want"<<endl;
  cin>>go;
  cout<<"enter the number of silver tickets you want"<<endl;
  cin>>si;
 }
 inline void display() const
 {
  cout<<"gold seats booked: "<<go<<endl;
  cout<<"silver seats booked: "<<si<<endl<<endl;
 }
 inline void updated()
 {
     int total,rg,rs;
     gold=gold-go;
     silver=silver-si;
     if(gold>0)
     {
     rg=go*rgold;
     cout<<"gold tickets left for the entered movie are "<<gold<<endl;
     }
     else
     cout<<"No gold tickets left for the entered movie!! HOUSEFULL\n";
     if(silver>0)
     {
     rs=si*rsilver;
     cout<<"silver tickets left for the entered movie are "<<silver<<endl;
     }
     else
     cout<<"No silver tickets left for the entered movie!! HOUSEFULL\n";
     total=rg+rs;
     cout<<"Total charges you have to pay: "<<total<<endl<<endl;
 }
};
int abc:: gold=500;
int abc:: silver=500;
int abc:: rgold=500;
int abc:: rsilver=400;
void welcome(char &ch)
 {
  cout<<"Hello!welcome for booking tickets here."<<endl<<"Press A to book tickets for movie abc\nPress B to book tickets for movie def\nPress C to book tickets for movie ghi\nPress D to book tickets for movie jkl\nPress E to exit\n";
  cin>>ch;
 }
int main()
{
    char ch;
    abc u;
    while(ch!='E')
    {
    welcome(ch);
    if(ch=='A')
    {
     u.user_info();
     u.updated();
     u.display();
    }
    else if(ch=='B')
    {
     u.user_info();
     u.updated();
     u.display();
    }
    else if(ch=='C')
    {
     u.user_info();
     u.updated();
     u.display();
    }
    else if(ch=='D')
    {
     u.user_info();
     u.updated();
     u.display();
    }
    else if(ch=='E')
    {
     u.user_info();
     u.updated();
     u.display();
    }
    }
    return 0;
}

