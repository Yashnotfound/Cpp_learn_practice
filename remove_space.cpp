# include <iostream>
# include <sstream>
# include <string>
using namespace std;



int main(){
    
 string str;
 getline(cin,str);
 int input;
string temp;
stringstream s(str);
str="";

while(s>>temp)
{str=str+temp;}

cout<<str;


    return 0;
}

