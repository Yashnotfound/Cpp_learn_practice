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
        if(n%2)
        {
            for (int i = n; i > 0; i--)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else if(n!=2)
        {
            cout<<2<<" "<<3<<" "<<1<<" "<<4;
            for(int i = 5;i<=n;i++){cout<<i<<" ";}
            cout<<endl;
        }
        
        else{cout<<-1<<endl;}

    }
    return 0;
}