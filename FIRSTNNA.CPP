#include<iostream.h>
#include<conio.h>
class A
{
    int n,i;
    public:
    void input()
       {
       cout<< " Enter an integer value : ";
       cin>>n;
       }
       void output()
	  {
	   for(i=1;i<=n;++i)
		{
		cout<<ends<<i;
		}
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