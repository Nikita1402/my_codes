#include <iostream>

using namespace std;
class election
{
 private:
 int N,ar1[50],ar2[50];
 public:
 void get_data()
 {
  int i=0;
  cout<<"enter the total number of states"<<endl;
  cin>>N;
  cout<<"enter the seats won by party 1 in each state"<<endl;
  for(i=0;i<N;i++)
  cin>>ar1[i];
  cout<<"enter the seats won by party 2 in each state"<<endl;
  for(i=0;i<N;i++)
  cin>>ar2[i];
 }
 int check_data()
 {
  int i=0,j=0,flag=0;
  for(i=0,j=0;i<N,j<N;i++,j++)
  {
   if(ar1[i]<0 || ar1[j]<0)
   {
   flag=1;
   break;
   }
  }
  if(flag==0)
  return 0;
  else
  return 1;
 }
 void result()
 {
  int a,i=0,j=0,count=0;
  a=check_data();
  if(a==1)
  cout<<"INVALID"<<endl;
  else
  {
   for(i=0;i<N;i++)
   {
   for(j=0;j<N;j++)
   {
    if(ar1[i]==ar2[j])
    {
     count++;
     ar2[j]=0;
     break;
    }
    else
    continue;
   }
   }
  if(count==N)
  cout<<"Result is : EQUAL"<<endl;
  else
  cout<<"Result is : UNEQUAL"<<endl;
  }
 }
};
int main()
{
    election p1;
    p1.get_data();
    p1.result();
    return 0;
}

