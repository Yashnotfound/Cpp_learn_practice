# include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int zero = count(str.begin(),str.end(),'0');
        int one = n-zero;

        if(n%2==0)
        {
            if(zero%2==0)
            {
                cout<<"YES"<<endl;
            }
            else if(zero==one)
            {cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}