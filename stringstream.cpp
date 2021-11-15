#include <sstream>
# include <iostream>
using namespace std;
int main() {

string str;
int a=45,b=23,c=12;

stringstream ss;

ss  << a << ',' << b << ',' << c; 
ss>>str;
cout<<str;

return 0;
}