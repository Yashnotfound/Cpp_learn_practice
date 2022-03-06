# include <bits/stdc++.h>
#define ll long long
using namespace std;

void naive(int arr[], int n)
{
    int tower1=arr[0];
    int tower2=0;
    int total=0;

    for (int i = 0; i < n-1; i++)
    {   
      tower1=max(arr[i],tower1);
      tower2=arr[i];
      for (int j = i+1; j < n ; j++)
      {
          tower2=max(arr[j],tower2);
      }
      
      total+=min(tower1,tower2)-arr[i];
      
    }
    cout<<total<<endl;
}
void efficient(int arr[], int n)
{
    int total=0;
    int lmax[n];
    int rmax[n];
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    for (int i = 1; i < n-1; i++)
    {
        lmax[i] = max(arr[i],lmax[i-1]);
    }
    for (int i = n-2; i > 0; i--)
    {
        rmax[i] = max(arr[i],rmax[i+1]);
    }

    for (int i = 1; i < n-1; i++)
    {
        total+= min(lmax[i],rmax[n-1-i])-arr[i];
    }
    cout<<total<<endl;
    
}
int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(auto &it : arr)
    {
        cin>>it;
    }
    efficient(arr,n);
    naive(arr,n);
    
    return 0;
}