#include<iostream.h>
class lcmgcd
{
private:
int a,b,x,l;
public:
void enter()
{
cout<< " Enter two number ";
cin>>a>>b;
x=a*b;
}
void compute();
};
void lcmgcd::compute (void)
{ while(a!=b)
{ if(a>b)
a-=b;
if(b>a)
b-=a
}
l=x/a;
cout<<" GCD= "<<a;
cout<<" LCM="<<l;
}
void main()
}
lcmgcd d;
d.enter();
d.compute();
}