#include <iostream>
using namespace std;
class recharge
{
 char username[50],password[50],promocode[50];
 static int wallet;
 static int counter;
 int rech;
 public:
 recharge()
 {
  cout<<"enter your username\n";
  cin>>username;
  cout<<"enter your password\n";
  cin>>password;
 }
 int get_data(recharge cc[])
 {
  int i,flag=0;
  cout<<"enter your valid username\n";
  cin>>username;
  cout<<"enter your valid password\n";
  cin>>password;
  for(i=0;i<5;i++)
  {
   if(username==cc[i].username && password==cc[i].password)
   {
   flag=1;break;}
   else
    flag=0;
  }
  if(flag==1)
   return 1;
   else
   return 0;
 }
 void amount()
 {
  cout<<"enter the amount to get recharge of\n";
  cin>>rech;
  if(rech>=100)
  {
  cout<<"enter the promo code if any\n";
  cin>>promocode;
 }
 else
 {
  if(wallet>0)
  {
   wallet=wallet-rech;
  cout<<"your recharge is successful and you don't have to pay\n";
  }
  else
   cout<<"your recharge is successful \n";
 }
  if(promocode=="GET20")
  {
   //cout<<"your recharge is successful and your 20% is kept safe in your wallet\n";
   wallet=wallet+0.2*rech;
   counter--;
  }
  if(counter>0)
   cout<<"your recharge is successful and your 20% is kept safe in your wallet\n";
 }
};
int recharge::counter=5;
int recharge::wallet=0;
int main()
{
   int n;
   recharge c[5],c1;
   n=c1.get_data(c);
   if(n==1)
   {
    c1.amount();
    c1.amount();
    c1.amount();
    c1.amount();
    c1.amount();
    c1.amount();
   }
    return 0;
}

