# include <iostream>
# include <string>
# include <stdio.h>
using namespace std;

class typing{

int rep;
string test;
float counter;

public :

typing(){counter=0.2;}

void input()
{    
    cin>>rep;
    cin>>test;
}

void convert()

{
    for (int i = 0; i < test.length(); i++)
    {
        //if(test.at(i)==('j'||'k'))
        //{test.at(i)=='r';}
        //else{test.at(i)=='l';}
        test.at(i) = test.at(i)==('j'||'k') ? 'r' : 'l';
    }
     

}

void sum()
{
    for (int i = 0; i < test.length()-1; i++)
    {
        if(test.at(i)==test.at(i+1))
        {counter+=0.4;}
        else{counter+=0.2;}
    }
}

void repetition()
{
    while(rep--)
{   input();
    convert();
    sum();   
        
 }
}
void output()
{
    cout<<counter;
}




};

int main(){
    
typing t1;
int n;
cin>>n;

while(n--)
{
t1.repetition();
t1.output();

}

    return 0;
}