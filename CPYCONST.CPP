#include<iostream.h>
#include<conio.h>
class A
{
   int a,b;
   public:
       A(int x,int y)
       {
	 a=x;
	 b=y;
       }
       A(A &ref)
       {
       a=ref.b;
       b=ref.b;
       }
       void show()
       {
       cout<< a<< " " <<b<<endl;
       }
};
void main()
{
clrscr();
A obj(10,20);
A obj2=obj;obj.show();
obj2.show();
getch();
}