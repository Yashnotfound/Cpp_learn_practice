# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin>>n;
     
    if(n%2!=0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int arr[n];
        for (int i = 0,j = n-1; i < n/2; i++,j--)
        {
            arr[i]=0;
            arr[j]=1;
        }
        
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
    }

    }

    return 0;
} 