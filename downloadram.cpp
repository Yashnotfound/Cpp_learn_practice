# include <iostream>
# include <map>
# include <vector>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        bool flag=1;
        int arr1[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>arr2[i];
        }
        
        while(flag)
    {   
        int counter=0;
       
        for (int i = 0; i < n; i++)
        {
         if(k>=arr1[i]&&arr1[i]!=-1)
         {
            arr1[i]=-1;
            k+=arr2[i];
            counter++;
         }   
        }

        if(counter==0)
        {flag=0;}      
    }

    cout<<k<<endl;

    }

    return 0;
}