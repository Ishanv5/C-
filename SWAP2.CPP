#include<iostream.h>
#include<conio.h>
class swap
{
int a,b,c;
public:
void input()
{
  cout<< " Enter two value ";
  cin>>a>>b;
}
   void output()
   {
   c=a;
   a=b;
   b=c;
   cout<< " a = "<<a<< " "<< " b= "<<b;
   }
};
void main()
{
clrscr();
swap obj;
obj.input();
obj.output();
getch();
}