# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(auto &it : arr)
    {cin>>it;}
    int count=1;
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
        {count++;}
        else{count--;}
        if(count==0)
        {
            count==1;
            res=i;
        }
    }
    count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==arr[res])
        {
            count++;
        }
    }
    if(count<=n/2)
    {res=-1;}
    cout<<res<<" "<<arr[res]<<"\n";
    
    return 0;
}