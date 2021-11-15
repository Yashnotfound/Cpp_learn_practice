# include <iostream>
using namespace std;

class employee
{
public :

static int empno;
int salary;


employee(int sal)
{salary=sal;
 empno++;       
}



};
int employee :: empno = 0;



//  syntax for inherited class -->
// {{inherit class name}} : {{visibility_mode}} {{base class name}}
// by default private is taken as default visibility mode.
// private members are never inherited.


class programmer : employee

{
public :







};


int main()
{
    


    return 0;
}