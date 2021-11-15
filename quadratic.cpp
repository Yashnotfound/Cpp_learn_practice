# include <iostream>
# include <math.h>
# include <cstdio>
using namespace std;

int main ()
{
float a,b,c;
double d,x_1,x_2;

printf("please input the values of a,b and c \n");


cin>>a>>b>>c;

d =pow(b,2)-4*a*c;

if(d==0)
{float root = -b/2*a;
cout<<"the root is "<<root<< endl;}

else if(d<0)
{ cout<<"real roots doesn't exist."<< endl;}

else
{
x_1=(-b+sqrt(d))/2*a;
x_2=(-b-sqrt(d))/2*a;
cout<<"roots are "<<x_1<< " and "<<x_2<< endl;}

system("pause");
return 0;
}

