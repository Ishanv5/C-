#include<iostream.h>
#include<conio.h>
class rectangle
{
float l,b,area;
public:
    void input()
    {
    cout<< " Enter lenght and breadth of rectangle : ";
    cin>>l>>b;
    }
    void output()

    {
    area=l*b;
    cout<< " Area of rectangle is : "<<area;
    }

};
void main()
{
clrscr();
rectangle obj;
obj.input();
obj.output();
getch();
}