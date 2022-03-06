# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr2[k];
        for(auto& it : arr2)
        {cin>>it;}
        int start = 1;
        for (int i = 0; i < k; i++)
        {
            for (int j = arr2[i]; j >= start; j--)
            {
                cout<<j<<" ";
            }
            start=arr2[i]+1;
        }
        cout<<endl;
        
        
    }
    return 0;
}