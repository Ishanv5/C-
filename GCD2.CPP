#include<iostream.h>
#include<conio.h>
class GCD
{
int n1,n2;
public:
     void input()
     {
     cout<< " Enter two nos ";
     cin>>n1>>n2;
     }
     void output()

     {
     while(n1!=n2)
     {
     if(n1>n2)
     n1-=n2;
     else
     n2-=n1;
     }

      cout<< " GCD "<<n1;

     }

};
void main()
{
clrscr();
GCD ob;
ob.input();
ob.output();
getch();
}