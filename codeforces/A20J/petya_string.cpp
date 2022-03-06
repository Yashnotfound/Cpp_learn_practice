# include <iostream>
using namespace std;

int main(){
    
    string s1,s2;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();

    if(l1!=l2)
    {cout<<-1;}
    for (int i = 0; i < l1; i++)
    {
        if(s1[i]<=90)
        s1[i]+=32;
        if(s2[i]<=90)
        s2[i]+=32;
        
    }
    
    if(s1>s2)
    {cout<<1;}
    else if(s1<s2)
    {cout<<-1;}
    else{cout<<0;}

    return 0;
}