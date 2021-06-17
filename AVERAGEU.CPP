#include<iostream.h>
#include<conio.h>
class average
{
float a,b,c,avg;
  public:
      average()

      {
      cout<< " Enter three variable ";
      cin>>a>>b>>c;
      }
      void output()
      {
      avg=(a+b+c)/3.0;
      cout<< " average "<<avg;


      }
      ~average(){}
};
void main()
{
clrscr();
average ob;

ob.output();
getch();
}