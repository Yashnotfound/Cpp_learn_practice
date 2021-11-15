# include <iostream>
using namespace std;

class complex{

int a,b;

public:

void getnum(int a1, int b1)
{
a=a1;
b=b1;
}
void printnum()
{
    cout<<a<<" + "<<b<<"i"<<endl;
}

friend complex sumcomp(complex,complex);   // Declaration of friend function.


}c1,c2,c3;

complex sumcomp (complex O1, complex O2) // friend function.
{   
complex O3;
O3.getnum((O1.a+O2.a),(O1.b+O2.b));
return O3;
}


int main(){ 
   
complex sum;

c1.getnum(2,3);
c1.printnum();

c2.getnum(3,5);
c2.printnum();

sum=sumcomp(c1,c2);  // assigning value of the complex to new object.
sum.printnum();            // calling print function for our new function.





    return 0;
}