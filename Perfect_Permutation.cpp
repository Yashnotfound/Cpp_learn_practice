# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k==n-1||k==0)
        {
            cout<<-1<<endl;
            continue;
        }
        int start = 1;
        for (int i = 0; i < k; i++)
        {
            cout<<start<<" ";
            start++;
        }
        if(n==k)
        {
            cout<<endl;
            continue;
        }
        start += 1;
        for (int i = 0; i < n-k-1; i++)
        {
            cout<<start<<" ";
            start++;
        }
        cout<<k+1<<endl;
        
    }
    return 0;
}