# include <iostream>
using namespace std;
int main() {

 int n;
cin>>n;
while(n--)
{
int input;
bool b1=0;
cin>>input;
if(input<=1)
{cout<<"no"<<endl;
    continue;
}
for (int i = 2; i <= input/2; i++)
{
    if (input%i==0)
    {
        b1=1;
    }
      
}
if(b1)
{cout<<"no"<<endl;}
else{cout<<"yes"<<endl;}

}


return 0;
}