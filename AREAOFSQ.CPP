#include<iostream.h>
#include<conio.h>
class Area
{
float a,area;
public:
    void input()
    {
    cout<< " Enter the side of square ";
    cin>>a;
    }
      void output()
      {
      area=a*a;
      cout<< " Area of a square "<<area;
      }
};
void main()
{
clrscr();
Area obj;
obj.input();
obj.output();
getch();
}