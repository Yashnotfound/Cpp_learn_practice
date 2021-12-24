# include <iostream>
using namespace std;

void sumTwoNumbers(long a, long b)
{
    cout<<a+b<<endl;
}

void subtractTwoNumbers(long a, long b)
{
    cout<<a-b<<endl;
}

void multiplyTwoNumbers(long a, long b)
{
    cout<<a*b<<endl;
}

void divideTwoNumbers(long a, long b)
{   if(b==0)
        {cout<<"Division by 0!"<<endl;}
        else {cout<<a/b<<endl;}
    }

int main(){
    
    long a,b;
    char c;
    cin>>a>>c>>b;

    if(c=='+')
    {sumTwoNumbers(a,b);}
    if(c=='-')
    {subtractTwoNumbers(a,b);}
    if(c=='*')
    {multiplyTwoNumbers(a,b);}
    if(c=='/')
    {divideTwoNumbers(a,b);}  

    return 0;
}