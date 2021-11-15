# include <iostream>
# include <iomanip>
using namespace std;

// structures are used to create a data type with which is an accumulation of multiple data types.
//E.g ---> data type employee.



// unions are used to push out only 1 type of data variable at a time, size of union = max size of stored data type.
// unions and structures have same syntax. 

union currency
{ char cur1;
  int value_cur;
  float value_2;
};

typedef struct employee
{ int emp_no;
  char car;
  double long mobile;
  int salary;
} emp;



int main(){
 
 emp yash;
 yash.emp_no=2313;
 yash.car='c';
 yash.mobile=1002110234;
 yash.salary=1500000;
  
//cout<<fixed<<setprecision(0)<<yash.emp_no<<endl<<yash.car<<endl<<yash.mobile<<endl<<yash.salary<<endl;
printf("employee no.is %d, employee salary is %d\n",yash.emp_no,yash.salary);

currency paisa;
paisa.cur1='a';
paisa.value_2=123;

cout<<paisa.cur1<<endl;  // this will print garbage value as the union is overwritten by integer value given by value_2.
cout<<paisa.value_2;









    




    return 0;
}