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
    int mx=0;
    for (int i = 0; i < n; i++)
    {   
        for (int j = i; j < n; j++)
        {   int sum=0;  
            for (int k = i; k < j; k++)
            {
                sum+=arr[k];
            }
            mx=max(mx,sum);
        }
        
    }

    cout<<mx<<endl;
    

    

    return 0;
}