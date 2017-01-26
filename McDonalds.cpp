#include <iostream>
using namespace std;
class Mcdonalds
{
 static int burger,Mcpuff,wraps,ice_creams,french_fries;
 int burg,Mcpuf,wrps,icecreams,frenchfries,amt;
 char location[20];
 public:
  void get_data()
  {
  cout<<"enter the location of drive_through\n";
  cin>>location;
  cout<<"enter the no. of burgers you want\n";
  cin>>burg;
  cout<<"enter the no. of Mcpuffs you want\n";
  cin>>Mcpuf;
  cout<<"enter the no. of wraps you want\n";
  cin>>wrps;
  cout<<"enter the no. of ice creams you want\n";
  cin>>icecreams;
  cout<<"enter the no. of french fries you want\n";
  cin>>frenchfries;
  }
  void cal_data()
  {
   amt=burg*burger+Mcpuf*Mcpuff+wrps*wraps+icecreams*ice_creams+frenchfries*french_fries;
  }
  void display_data(int l)
  {
   cout<<"For drive through "<<l<<":"<<endl;
   cout<<"No. of burgers sold :"<<burg<<endl;
   cout<<"No. of Mcpuffs sold :"<<Mcpuf<<endl;
   cout<<"No. of wraps sold :"<<wrps<<endl;
   cout<<"No. of ice creams sold :"<<icecreams<<endl;
   cout<<"No. of french fries sold :"<<frenchfries<<endl;
    cout<<"location :"<<location<<endl;
  }
static void sorting(Mcdonalds drive_through[])
{
int j,k;
Mcdonalds temp;
 for(j=1;j<5;j++)
{
for(k=0;k<5-j;k++)
{
 if(drive_through[k].amt<drive_through[k+1].amt)
 {
 temp=drive_through[k];
 drive_through[k]=drive_through[k+1];
 drive_through[k+1]=temp;
 }
}
}
   }
};
int Mcdonalds::burger=65;
int Mcdonalds::Mcpuff=30;
int Mcdonalds::wraps=55;
int Mcdonalds::ice_creams=15;
int Mcdonalds::french_fries=50;
int main()
{
int i,l;
char ch;
Mcdonalds drive_through[5];
//Mcdonalds drive;
cout<<"enter y to calculate bill and n to exit\n";
cin>>ch;
while(ch=='y')
{
cout<<"enter the drive through where you are\n";
cin>>i;
i--;
drive_through[i].get_data();
drive_through[i].cal_data();
cout<<"enter y to calculate bill and n to exit\n";
cin>>ch;
}
Mcdonalds::sorting(drive_through);
for(l=0;l<5;l++)
{
 drive_through[l].display_data(l);
}
    return 0;
}

