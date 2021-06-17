#include<iostream.h>
#include<conio.h>
class A
{
public:
       void show()
       {
       cout<< " Hi I am Base class ";

       }

};
class B:public A
{
public:
void show()
{
cout<< " Hi I am Derived class ";
}
};
void main()
{
clrscr();
A obj;
obj.show();
B obj2;
obj2.show();
getch();
}