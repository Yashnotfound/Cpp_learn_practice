# include <iostream>
using namespace std;

class pattern{

private :

bool a;
bool b;
bool c;
int num;
int land[500];

public :
void input()
{ 
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        cin>>land[i];
    } 
}
void check1()
{
    a=(num%2!=0);
}
void check2()
    {
  for (int i = 0; i <= num/2; i++)
  {
      b=(land[i]==i+1);
  }
     }
void check3()
  {
for (int i = 0; i < num; i++)
{   c=(land[i]==land[num-1-i]);}


  }
void condition()
{
    if(a&&b&&c)
    {cout<<"yes"<<endl;}
    else{cout<<"no"<<endl;}
}




};



int main(){
    
pattern temple;
 

int rep;
cin>>rep;
while(rep--)

{temple.input();
temple.check1();
temple.check2();
temple.check3();
temple.condition();
}
    return 0;
}