#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(auto& it : arr)
    {
        cin>>it;
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
    
    for(auto it : arr)
    {cout<<it<<" ";}

    return 0;
}