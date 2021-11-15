# include <iostream>
using namespace std;
class complex;
ostream& operator<<(ostream&,complex&);
complex operator+ (complex&,complex&);
class complex{
    float real;
    float imaginary;

    public :
    complex(){
     real=0;
     imaginary=0;   
    }
    complex(int r,int i ){
     real=r;
     imaginary=i;   
    }

    friend ostream& operator<<(ostream&,complex&);
    friend complex operator+ (complex&,complex&);

};

ostream& operator<<(ostream& cout,complex& c1)
{
    cout<<c1.real<<"+"<<c1.imaginary<<"i"<<endl;
    return cout;
}

complex operator+ (complex& c1,complex& c2)
{
    complex c3;
    c3.real=c1.real+c2.real;
    c3.imaginary=c1.imaginary+c2.imaginary;
    return c3;
}

int main(){
    
complex c1(56,43);
complex c2 = complex(34,12);
complex c3;
c3= c1+c2;

cout<<c1<<c2; 
cout<<c3; 
    return 0;
}