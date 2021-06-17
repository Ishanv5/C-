#include<iostream.h>
#include<conio.h>
class A
{
float r,area;
public:
   void input()
   {
   cout<< " Enter radius of circle : ";
   cin>>r;



       area=3.14*r*r;
       cout<< " Area of a circle is : "<<area;
   }
};
void main()
{
clrscr();
A obj;
obj.input();

getch();
}