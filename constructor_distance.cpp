# include <iostream>
# include <math.h>
using namespace std;
class cartesian;

class  cartesian
{
int x;
int y;
friend float distance(cartesian,cartesian);
public :

 cartesian(int a,int b);
void print();

};

cartesian:: cartesian(int a,int b)
{x=a;
y=b;}

void cartesian::print(){

    cout<<"("<<x<<","<<y<<")";
}

int main(){ 
    int a,b,c,d;

    cin>>a>>b>>c>>d;
    cartesian p1(a,b);
    cartesian p2(c,d);
   
    cout<<"the points are ";
    p1.print();
    cout<<" and ";
    p2.print();

    cout<<"\nthe distance between these points is "<<distance(p1,p2);

    return 0;
}

float distance(cartesian p,cartesian q)
{
return sqrt( pow((p.x-q.x),2)+ pow((p.y-q.y),2) );
}
