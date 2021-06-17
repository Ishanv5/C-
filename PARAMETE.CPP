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
    void show()
   { cout<<a<< " "<<b;  }
};

void main()
{
clrscr();
A obj(10,20);
obj.show();
getch();
}