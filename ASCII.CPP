#include<iostream.h>
#include<conio.h>
class A
{
int i;
public:
void show()
{
for(i=0;i<=255;++i)
{
cout<<"  "<<(char)i<<i;
}
}
};
void main()
{
clrscr();
A obj;
obj.show();
getch();
}