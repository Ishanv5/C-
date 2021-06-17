y#include<iostream.h>
#include<conio.h>
class Max
{
   int a,b;
   public:
   void input()
   {
   cout<< " Enter two integer value ";
   cin>>a>>b;
   }
   void process()
   {
   if(a>b)
   cout<< " Greater is ... "<<a;
   else
   cout<< " Greater is ... "<<b;
   }
};
void main()
{
clrscr();
Max obj;//
Max obj1;
Max obj2;
obj.input();
obj.process();

obj1.input();
obj2.input();
getch();
}