#include<iostream.h>
#include<conio.h>
class A
{
   int c,r,s,n;
   public:
     void input()
     {
     cout<< " Enter an integer values ";
    cin>>n;
}
     void output()
     {
     c=n;
     s=0;
     while(n>0)
     {
     r=n%10;
     s=(s*10)+r;
     n=n/10;
     }
     if(c==s)
     cout<<" Palindrome nos";
     else
     cout<<" Not Palindrome nos ";
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