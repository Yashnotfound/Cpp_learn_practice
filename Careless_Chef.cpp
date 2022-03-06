# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int barr[2*n];
        ll even = 0;
        ll odd = 0;
        for(auto & it : barr)
        {
            cin>>it;
            if(it<0)
            {it=-it;}
            if(it%2)
            {odd++;}
            else{even++;}
        }

        if(even%2==0 and odd%2==0 )
        {
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }
    return 0;
}