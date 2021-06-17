/*
n=153
1*1*1=1
5*5*5=125
3*3*3=27
add=1+125+27=153
this is an armstrong nos
*/
#include<iostream.h>
#include<conio.h>
class  A
{
int c,r,arm,m;
public:
      void set()
      {
      cout<<" Enter an integer : ";
      cin>>m;
      }
	void process()
	  {
	  c=m;
	  arm=0;
	  while(m>0)
	  {
	  r=m%10;
       arm= ( r*r*r)+arm;
       m=m/10;
       }
       if(c=arm)
       cout<< " Armstrong nos ";
       else
       cout<< " Not Armstrong nos ";
	  }
};
void main()
{
clrscr();
A obj;
obj.set();
obj.process();
getch();
}