#include<iostream.h>
#include<conio.h>
class A
{
float a,b;
    public:
	  void show(int x,int y)
	  {
	     a=x;
	     b=y;
	     cout<<a<< " "<<b<<endl;
	  }
	  void show(float x,float y)
	  {
	    a=x;
	    b=y;
	    cout<<a<<" "<<b<<endl;
	  }
};
void main()
{
clrscr();
A obj ,obj2;
obj.show(10,20);
obj2.show(2.6f,4.5f);
getch();

}