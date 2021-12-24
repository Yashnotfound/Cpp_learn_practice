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
    int t;
    cin>>t;
    while(t--)
    {
        int a,k;
        int counter=0;
        cin>>a>>k;
        for (int i = 0; i < n; i++)
        {
            if(a%arr[i]==0)
            {
                counter++;    
            }
            if(counter==k)
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        
        if(counter<k)
        {cout<<"NO"<<endl;}
    }

    

    return 0;
}