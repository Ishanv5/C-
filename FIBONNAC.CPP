#include<iostream.h>
class fibonacci
{
private:
unsigned long int f0,f1,fib;
public:
fibonacci();  // constructor declared
void increament();
void display();
};
fibonacci ::fibonacci()  //constructor declared
{
f0=0;
f1=1;
fib=f0+f1;
}
void fibonacci :: increament()
{
f0=0;
f1=1;
fib=f0+f1;
}
void fibonacci::display()
{
cout<<fib<<" \t ";
}
int main()
{
fibonacci number;
for(int i=0;i<=15;++i)
{
number.display();
number.increament();
}
return 0;
}
