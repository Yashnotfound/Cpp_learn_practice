# include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int mx=arr[0];
    // for (int i = 0; i < n; i++) 
    // {   
    //     for (int j = i; j < n; j++)
    //     {   int sum=0;  
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum+=arr[k];
    //         }
    //         mx=max(mx,sum);
    //     }
        
    // }

       int sum=0;
       for (int i = 0; i < n; i++)
       {
           sum+=arr[i];
           mx=max(sum,mx);
           if(sum<0)
           {sum=0;}
       } 
        
    cout<<mx<<endl;
    
    return 0;
}