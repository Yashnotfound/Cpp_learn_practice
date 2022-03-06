# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int n,k;
    cin>>n>>k;
    vector<int> arr(n,0);
    arr[k-1]=1;
    int sum=0;
    for (int i = k; i < n; i++)
    {
        sum+=arr[i-1];
        arr[i]=sum;
        sum-=arr[i-k];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}