# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int n;
    cin>>n;
    ll arr[n];
    for(auto& it: arr)
    {
        cin>>it;
    }
    ll maxdiff=INT_MIN;
    ll maxnum=arr[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        maxdiff = max(maxdiff,maxnum-arr[i]);
        maxnum = max(maxnum,arr[i]);
    }
    cout<<maxdiff<<endl;
    
    return 0;
}