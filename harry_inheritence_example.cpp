# include <iostream>
# include <sstream>
# include <string>
using namespace std;

class Simplecalculator
{
protected :
 double a;

public :

Simplecalculator(int a1)
{a=a1;}

void operator + (Simplecalculator s1)
{
cout<< float(a+s1.a)<<endl;
}

void operator - (Simplecalculator s1)
{
cout<< float(a-s1.a)<<endl;
}
    
 void operator * (Simplecalculator s1)
{
cout<< float(a*s1.a)<<endl;
}

void operator / (Simplecalculator s1)
{
cout<< float(a/s1.a)<<endl;
}

};

class Complexcalculator
{






};



int main(){
    
int a,b;
char ch;
string s;

getline(cin,s);

stringstream geek(s);

geek >> a>> ch>> b;

Simplecalculator s1(a);
Simplecalculator s2(b);

switch(ch)
{
case '+' : 
s1+s2;
break;
case '-' :
s1-s2;
break;
case '*' :
s1*s2;
break;
case '/' :
s1/s2;
break;

}
    return 0;
}