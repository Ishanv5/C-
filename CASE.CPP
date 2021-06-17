#include<iostream.h>
#include<conio.h>
class A
{
char ch;
public:
    void input()
    {
    cout<< " Enter a character value ";
    cin>>ch;
    }
	void output()
	{
	if(ch>='a' && ch<='z')
	{
	ch=ch-32;
	cout<<ch;
	}
	else
	{
	ch=ch+32;
	cout<<ch;
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