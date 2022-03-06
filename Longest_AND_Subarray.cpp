# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x = 1;
        bool flag=0;
        while(x<n)
        {
            x*=2;
        }
        if(x==n)
        {flag=1;}
        x/=2;

        if(flag==0)
        {cout<<max(n-x+1,x-x/2)<<endl;}
        else
        {cout<<max(n-x,x-x/2)<<endl;}
    }
    return 0;
}