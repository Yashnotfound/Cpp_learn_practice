# include <iostream>
using namespace std;

class Y;

class X{
int data;
public :

friend void swap(X&,Y&);

void getdata(int input)
{data=input;}

int display(){return data;}    
};
class Y{
int data;
public :

friend void swap(X&,Y&);

void getdata(int input)
{data=input;}

int display(){return data;}    
};

void swap(X& o1,Y& o2)
{
int temp = o1.data;
o1.data = o2.data;
o2.data = temp; 

}

int main(){
    
X a;
a.getdata(34);
cout<<a.display()<<endl;

Y b;
b.getdata(54);
cout<<b.display()<<endl;

swap( a, b);

cout<<a.display()<<endl;
cout<<b.display()<<endl;






    return 0;
}