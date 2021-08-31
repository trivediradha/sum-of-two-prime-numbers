#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
Private:
int seconds;
int hh,mm,ss;
Public:
void getTime(void);
void convertIntoseconds(void);
void display Time(void);
};
void Time::getTime(void)
{
    cout<<"Enter time:"<<endl;
    cout<<"Hours?";cin>>hh;
    cout<<"Minutes?"cin>>mm;
    cout<<"Seconds?"cin>>ss;
}
void Time::convertIntoseconds(void)
{
    seconds=hh*3600+mm*60+ss;
}
void Time::displayTime(void)
{
cout<<"The time is="<<setW(2)<<setfill('0')<<hh<<":"
cout<<"The time is="<<setW(2)<<setfill('0')<<mm<":"
cout<<"The time is="<<setW(2)<<setfill('0')<<ss<<endl;
cout<<"Time in total seconds:"<<seconds;
}
int main()
{
    Time T;//creating objects
    T.getTime();
    T.convertIntoseconds();
    T.displayTime();
    return 0;
}
























































