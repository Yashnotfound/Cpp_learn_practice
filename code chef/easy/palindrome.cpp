# include <iostream>
# include <string>
# include <sstream>
using namespace std;

class palindrome{
private :
string set;
bool b1;

public:

void input()
{
    cin>>set;
}

void process()
{   b1=1;
    for (int i = 0; i < set.length()/2; i++)
    {
        if(set[i]!=set[set.length()-1-i])
        {b1=0;
          break;  
        }
    }
    if(b1)
    {cout<<"wins"<<endl;}
    else{cout<<"loses"<<endl;}

}

};

int main() {

palindrome p;
int n;
cin>>n;

while(n--)
{
p.input();
p.process();
}
return 0;
}