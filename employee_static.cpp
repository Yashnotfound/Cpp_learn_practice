# include <iostream>
# include <string.h>

using namespace std;

class employee
{
static int empno;
char emp_name [20];
static int salary;

public :

void getname ();
void empsalary()
{
    cout<<"The salary of employee number "<<empno<<" and name "<<emp_name<<" is "<<salary<<endl;
    empno++;
    salary+=5000;
}




};

int employee :: empno = 1001;
int employee :: salary = 50000;

void employee :: getname()
{
cout<<"type the name of the employee "<<endl;
cin>>emp_name;
}

int main(){
    
    employee e1,e2,e3; 

    e1.getname();
    e1.empsalary();
    e2.getname();
    e2.empsalary();
    e3.getname();
    e3.empsalary();


    return 0;
}