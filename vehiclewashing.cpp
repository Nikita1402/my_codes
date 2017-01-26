#include <iostream>
#include<string.h>
using namespace std;
class user_details
{
 private:
 char name[50];
 char phn_no[10];
 public:
 int cust_id;
 char typeofvehicle[50];
user_details()
 {
  cout<<"enter your name\n";
  cin>>name;
  cout<<"enter your type of vehicle\n";
  cin>>typeofvehicle;
  cout<<"enter your phone number\n";
  cin>>phn_no;
  cout<<"enter your customer_id,if any,otherwise write 0  \n";
  cin>>cust_id;
 }
};
class washing:virtual public user_details
{
 public:
     washing()
     {
      cout<<"price of washing a bike = Rs.50\n";
      cout<<"price of washing a car = Rs.100\n";
      cout<<"price of washing a truck = Rs.200\n";
     }
    int cust_id1;
    char typeofvehicle1[50];
     void subsi()
     {
      cust_id1=cust_id;
      strcpy(typeofvehicle1,typeofvehicle);
     }
};
class polishing:virtual public user_details
{
  protected:
  char var;
  public:
  polishing()
  {
   cout<<"price of polishing a bike = Rs.50\n";
   cout<<"price of polishing a car = Rs.100\n";
   cout<<"price of polishing a truck = Rs.200\n";
  }
  protected:
  void option()
  {
   cout<<"do you want to polish your vehicle\n";
   cin>>var;
  }
};
class bill:public washing,public polishing
{
  protected:
   int exist[5]={1,2,3,4,5},amount;
  public:
  void display()
  {
   subsi();
   int i=0,flag=0;
   option();
   if(var=='y')
   {
    for(i=0;i<5;i++)
    {
     if(cust_id1==exist[i])
     {
      flag=1;
      discountbill();
      break;
     }
    }
    if(flag==0)
    directbill1();
   }
   else
    directbill2();
    cout<<"your bill amount is "<<amount<<endl;
  }
  protected:
  void discountbill()
  {
    if(strcmp(typeofvehicle1,"bike")==0)
    amount=(50+50)-5;
    else if(strcmp(typeofvehicle1,"car")==0)
    amount=(100+100)-10;
    else if(strcmp(typeofvehicle1,"truck")==0)
    amount=(200+200)-20;
  }
  void directbill1()
  {
   if(strcmp(typeofvehicle1,"bike")==0)
    amount=(50+50);
    else if(strcmp(typeofvehicle1,"car")==0)
    amount=(100+100);
    else if(strcmp(typeofvehicle1,"truck")==0)
    amount=(200+200);
  }
  void directbill2()
  {
  if(strcmp(typeofvehicle1,"bike")==0)
    amount=50;
    else if(strcmp(typeofvehicle1,"car")==0)
    amount=100;
    else if(strcmp(typeofvehicle1,"truck")==0)
    amount=200;
  }
};
int main()
{
    bill b1;
    b1.display();
    return 0;
}

