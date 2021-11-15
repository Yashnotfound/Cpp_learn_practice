# include <iostream>
# include <string>
# include <sstream>

using namespace std;

string remove_space(string str)
{
    stringstream ss(str);
    string temp;
    str="";
    while(!ss.eof())
    {ss>>temp;
    str=str+temp;
    }
    return str;
}

int count_words(string str)
{   
    int count=0;
    stringstream ss(str);
    string a;
    while(ss>>a)
    {count++;}

    return count;
}

int main(){
string s1;
string s2;
char ch;    
s1="my name is yash my name is    yash";
stringstream ss(s1);
while(ss>>s2)
    {cout<<s2;}
    cout<<endl;
    cout<<remove_space(s1)<<endl;
    cout<<count_words(s1);
 
    return 0;

} 