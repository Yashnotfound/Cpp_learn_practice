# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        bool flag=0;
        cin>>n>>k;
        for (int i = 1; i <= n; i++)
        {
            double temp = (double)k/(double)i;
            int diff = n-i+1;
            if(diff>=temp&&ceil(temp)==floor(temp))
            {   
                flag=1;
                break;
            }
        }
        if(flag)
        {cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
               
    }
    return 0;
}