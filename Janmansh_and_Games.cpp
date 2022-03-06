# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if((x+y)&1)
        {
            cout<<"Jay"<<endl;
        }
        else{cout<<"Janmansh"<<endl;}
    }
    return 0;
}