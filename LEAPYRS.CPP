#include<iostream.h>
#include<conio.h>
class Leap
{
int y;
public:
void leapyear()
{
   cout<< " Enter year ";
   cin>>y;
   if(y%400==0 && y%100==0|| y%4==0 && y%100!=0)
   cout<< " Leap year ";
   else
   cout<< " Not Leap year ";
}
};
void main()
{
clrscr();
Leap obj;
obj.leapyear();
getch();
}