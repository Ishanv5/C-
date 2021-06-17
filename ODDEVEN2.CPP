#include<iostream.h>
#include<conio.h>
class A
{
   int n;
   public:
   void input()
   {
   cout<< " Enter a value ";
   cin>>n;
   }
   void output()
   {
   if(n%2==0)
   cout<< " It is an even number ";
   else
   cout<< " It is an odd number ";

   }
};
void main()
{
clrscr();
A obj;
obj.input();
obj.output();
getch();
}