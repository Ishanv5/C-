#include<iostream.h>
#include<conio.h>
class multiplication
{
int a,b,c;
public:
void input()
{
cout<< " Enter two integer value ";
cin>>a>>b;
}
void multi()
{
c=a*b;
}
void show()
{
cout<<c;
}
};
void main()
{
clrscr();
multiplication obj;
obj.input();
obj.multi();
obj.show();
getch();
}