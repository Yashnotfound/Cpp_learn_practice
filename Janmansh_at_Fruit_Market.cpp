# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){    
    int t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        ll arr[3];
        for(auto &it : arr)
        {cin>>it;}
        sort(arr,arr+3);
        cout<<arr[0]*(x-1)+arr[1]<<endl;
    
    }
    return 0;
}