# include <iostream>
# include <string>
using namespace std;

class four{

string input;
int counter=0;
int stringlen;

public:

void inputs(){cin>>input;}
void length(){stringlen=input.length();}

void checkfour()
{
for (int i = 0; i < stringlen; i++)
    {if (input.at(i)=='4')
    {
        counter++;
    }
    
}}
void output(){cout<<counter<<endl;}
void reset(){counter=0;}

};


int main(){
four num;
int a;
cin>>a;
for (int i = 0; i < a; i++)
{ 
    num.inputs();
    num.length();
    num.checkfour();
    num.output();
    num.reset(); 
}
    return 0;   
}