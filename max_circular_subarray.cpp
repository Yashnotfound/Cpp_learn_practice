# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin>>n;
    int k = 2*n;
    int arr[k];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        arr[n+i]=arr[i];
    }
    int j=0;
    int sum=0;
    int total=INT_MIN;
    for (int i = 0; i < k; i++,j++)
    {
        if(j==n)
        {
            break;
        }
        sum+=arr[i];
        total = max(total,sum);
        if(sum<0)
        {
            sum=0;
            j=0;
        }
    }
    cout<<total<<endl;
    
    return 0;
}