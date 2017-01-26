#include <iostream>
#include <stdlib.h>
#define max 5
using namespace std;
class stack_
{
 private:
 int top;
 int arr[10];
 public:
 stack_()
 {
  top=-1;
 }
 void push(int x)
 {
  if(top==max-1)
  cout<<"overflow";
  else
  {
   top++;
   arr[top]=x;
   cout<<x<<" is successfully pushed\n";
  }
 }
 void pop()
 {
  int element;
  if(top==-1)
  cout<<"underflow\n";
  else
  {
   element=arr[top];
   top--;
   cout<<element<<" successfully popped out\n";
  }
 }
 void display()
 {
   int i=0;
   if(top==-1)
   cout<<"stack is empty\n";
   else
   {
   for(i=0;i<top;i++)
   {
    cout<<arr[i]<<endl;
   }
   }
 }
};
int main()
{
    int ch,number;
    stack_  s1;
    do{
     cout<<"enter 1 to push\n";
     cout<<"enter 2 to pop\n";
     cout<<"enter 3 to display stack\n";
     cout<<"enter 4 to exit\n";
     cin>>ch;
     switch(ch)
     {
  case 1:
      {
       cout<<"enter an element to insert\n";
       cin>>number;
       s1.push(number);
       break;
      }
  case 2:
    {
     s1.pop();
     break;
    }
  case 3:
    {
     cout<<"the elements of stack are\n";
     s1.display();
     break;
    }
  case 4:
    {
     exit(0);
    }
     }
    }while(1);
    return 0;
}

