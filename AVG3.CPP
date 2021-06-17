#include<iostream.h>
#include<conio.h>
class Average
{
int a,b;
float avg;
public:
Average()
{
cout<< " Enter two number ";
cin>>a>>b;
avg=(a+b)/2.0f;
cout<< " Average  of two number "<<avg;
}
~Average()
{
}
};
void main()
{
clrscr();
Average ob;
getch();
}