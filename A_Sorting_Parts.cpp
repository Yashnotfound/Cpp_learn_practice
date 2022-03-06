# include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        bool flag=0;
        cin >>n;
        int arr[n];
        for(auto& it : arr)
        {
            cin>>it;
        }
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i+1]<arr[i])
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