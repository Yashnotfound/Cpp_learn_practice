# include <iostream>
# include <string>
# include <sstream>
using namespace std;

class string_in{
   
   string input_no;
   int counter =0;

public:
void getnum();
void sumnum();
void reset(){
    counter=0;
}


};
void string_in :: getnum()
{
cin>>input_no;
}

void string_in :: sumnum()
{
    for(int i=0;i<input_no.length();i++)
    {
     char num = input_no.at(i);
     int x= num-'0';
     counter+=x;

    }cout<<counter<<endl;
    
}

int main(){
    int nos;
    string_in num;
    cin>>nos;
    for(int i=0;i<nos;i++)
    {num.getnum();
    num.sumnum();
    num.reset();
    }
    return 0;
}