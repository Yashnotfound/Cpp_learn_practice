# include <iostream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main(){
    int counter=0;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int len;
        string txt;
        cin>>txt;
        len=txt.length();
        stringstream geek(txt);
        int x = 0;
        geek >> x;
        for (int i = 0; i <len; i++)
         {
             counter=counter+x%10;
             x=x/10;

         }
        cout<<counter<<endl;
        counter=0;
    }
}
