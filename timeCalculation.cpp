#include <iostream>
using namespace std;
class times
{
private:
int hours;
int minutes;
public:
void gettime()
{
 cout<<"enter time in hours and minutes format\n";
 cin>>hours>>minutes;
}
friend times sum(times tt1, times tt2)
{
 times temp;
 temp.hours=0;temp.minutes=0;
 temp.minutes=tt1.minutes+tt2.minutes;
 if(temp.minutes>=60 && temp.minutes<120)
 {
  temp.minutes=temp.minutes-60;
  temp.hours=temp.hours+tt1.hours+tt2.hours+1;
 }
  if(temp.hours>24)
  temp.hours=temp.hours-24;
 return temp;
}
void display()
{
 cout<<"resultant time is:\n";
 cout<<hours<<" "<<minutes<<endl;
}
};
int main()
{
  times t1,t2,t3;
    t1.gettime();
    t2.gettime();
    t3 = sum(t1,t2);
    t3.display();
    return 0;
}




