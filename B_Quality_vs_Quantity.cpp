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
        ll arr[n];
        ll cum[n];
        ll sum=0;
        ll summx=0;
        bool flag=0;
        int j=n-1;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);  

        sum=arr[0];
        for (int i = 1; i < n; i++,j--)
        {   if(i==j)
            {break;}
           sum+=arr[i];
           summx+=arr[j];
           if(summx>sum)
           {
               flag=1;
               break;
           }
        }   
        if(flag)
        {cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        
    }
    return 0;
}