#include<iostream.h>
#include<conio.h>
class A
{
int a,b,c;
public:
   void input()
   {
   cout<< " Enter height and base of a triangle ";
   cin>>a>>b;
   }
   void process()
   {
   c=0.5*a*b;
   cout<< " Area of a triangle is : "<<c;
   }
};
void main()
{
clrscr();
A obj;
obj.input();
obj.process();
getch();
}