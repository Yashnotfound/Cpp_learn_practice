# include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        long long x,m,k=1;
        cin>>x>>m;
        int comp=0;
        while(k<x)
        {
            k*=2;
            comp++;
        }
        comp++;

        if(m<comp)
        {
            cout<<0<<endl;
        }
        
        else {
            cout<<m-comp+1<<endl;
        }

    }

    return 0;
}