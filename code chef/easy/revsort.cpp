# include <algorithm>
# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+t);

    for (int i = 0; i > 0; i++)
    {   if(arr[i]==arr[i+1] && i!=t-1)
        {continue;}
        cout<<arr[i]<<endl;
    }
    
    return 0;
}