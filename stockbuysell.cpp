# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int count;
    cin>>count;
    int arr[count];
    for(auto & it: arr)
    {cin>>it;}
    int maxdiff=0;

    for (int i = 1; i < count; i++)
    {
        if(arr[i]>arr[i-1])
        {
            maxdiff+=arr[i]-arr[i-1];
        }
    }
    cout<<maxdiff<<endl;
    
    return 0;
}