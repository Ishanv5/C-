#include<iostream.h>
#include<conio.h>
class A
{
   char ch;
   public:
   void input()
   {
       cout << " Enter any character value ";
       cin>>ch;
   }
   void output()
   {
       cout<< " ASCII value of ... "<<ch<< " is "<<(int)ch;
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