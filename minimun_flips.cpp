# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    string str;
    cin>>str;
    for (int i = 1; i < str.length(); i++)
    {
        if(str[i]!=str[i-1])
        {
            if(str[i]!=str[0])
            {
                cout<<"from "<<i<<" to ";
            }
            else{cout<<i-1<<endl;}
        }
    }
    if(str[str.length()-1]!=str[0])
    {
        cout<<str.length()-1<<endl;
    }
    

    return 0;
}