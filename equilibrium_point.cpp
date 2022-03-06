# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(auto& it: arr)
    {
        int temp;
        cin>>temp;
        sum+=temp;
        it=sum;
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==arr[n-1]/2)
        {
            cout<<i+1<<endl;
            break;
        }
        if(arr[i]!=arr[n-1]/2 && i==n-1)
        {
            cout<<-1<<endl;
        }
    }
    
        
    return 0;
}