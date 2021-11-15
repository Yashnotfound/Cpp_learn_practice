# include <iostream>
using namespace std;

int factorial(int a)
{
if(a<=1)
{return 1;}
return a*factorial(a-1);
}

int main(){
    
int loop_var;
int input;
cin>>loop_var;
for (int i = 0; i < loop_var; i++)
{   cin>>input;
    cout<<factorial(input)<<endl;
}
    return 0;
}