# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        ll p = n*n;
        cout<<int(s/p)<<endl;
    }
    return 0;
}