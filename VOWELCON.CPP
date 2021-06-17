#include<iostream.h>
#include<conio.h>
class A
{
char ch;
public:
void input()
{
cout<< " Enter any character : ";
cin>>ch;
}
void show()
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    cout<< " Vowel ";
    else
    cout<< " Consonant ";
}
};
void main()
{
clrscr();
A obj;
obj.input();
obj.show();
getch();
}