# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(auto & it : arr)
    {cin>>it;}
    int sum=arr[0];
    int j=0;
    bool flag=0;
    for (int i = 1; i < n; i++)
    {   //clearing the window if required
        while(sum>q and j!=i-1)
        {
            sum-=arr[j];
            j++;
        }
        if(sum==q)
        {
            cout<<"YES"<<endl;
            flag=1;
            break;
        }
        else{
        sum+=arr[i];}

    }
    if(sum==q)
        {
            cout<<"YES"<<endl;
            flag=1;
        }
    
    if(!flag)
    {cout<<"NO"<<endl;}

    return 0;
}