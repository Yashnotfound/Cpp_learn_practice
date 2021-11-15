# include <iostream>
# include <vector>
# include <string>
# include <sstream>
using namespace std;

class dec_to_bin{

int dec;
bool bin_input;
long int num;
vector <int> bin;
public :

void input()
{cin>>dec;}

void convert()
{
    while(dec!=0)
    {
        if(dec%2==1)
        {bin.push_back(1);}
        else{bin.push_back(0);}
        dec/=2;
    }

}

void output()
{
    for (int i = bin.size()-1; i >=0; i--)
    {
        cout<<bin[i];
    }
}

};



int main(){
    
int n;
cin>>n;

while(n--)
{
    dec_to_bin o1;

    o1.input();
    o1.convert();
    o1.output();

}

    return 0;
}