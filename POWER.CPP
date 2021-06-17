#include<iostream.h>
#include<conio.h>
#include<math.h>
class A
{
float base,exponent,result;
public:
A()
{
cout<< " Enter base and exponent resp ";
cin>>base>>exponent;
}
void output()
{
result=pow(base,exponent);
cout<<base<<" ^ "<<exponent<<" = "<<result;
}
~A() {
}
};
void main()
{ clrscr();
A ob;
ob.output();
getch();
}