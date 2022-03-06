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
        int arr[n];
        for(auto& it : arr)
        {cin>>it;}
        int zero = count(arr,arr+n,0);
        cout<<max(zero,n-zero)<<endl;
    }

    return 0;
}