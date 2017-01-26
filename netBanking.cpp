#include <iostream>
using namespace std;
#include<string.h>
class account
{
 private:
 int accno,bal;
 char password[50];
 public:
 account(int x,int y,char s[])
 {
  accno=x;
  bal=y;
  strcpy(password,s);
 }
 friend class transaction;
};
class transaction
{
    int acc,amt;
 public:
    transaction()
     {
      cout<<"enter your account number\n";
      cin>>acc;
     }
 void searching(account aa1[])
 {
  int i=0,flag=0;
 for(i=0;i<4;i++)
 {
 if(acc==aa1[i].accno)
 {
  flag=1;
  break;
 }
 else
 continue;
 }
 if(flag==1)
 {
 cout<<"enter the amount you want to transfer\n";
 cin>>amt;
 cout<<"your transaction is completed successfully\n";
 }
 }
};
int main()
{
    int i=0;
    account a[4]={account(12,2000,"nikita"),account(23,1000,"john"),account(34,3000,"david"),account(45,4000,"george")};
    transaction b;
    b.searching(a);
    return 0;
}

