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
        ll sum=0;
        ll sum1=0;   
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        int answer[n];
        
        for (int i = 0; i < n; i++)
        {
            sum-=arr[i];
            sum1+=arr[i];
            answer[i]=max(sum,sum1);
        }
        cout<<*min_element(answer,answer+n)<<endl;      
    }
    return 0;
}