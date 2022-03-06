# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,y;
        cin>>n>>x>>y;
        long long int arr[n];
        int oddcount=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2)
            {
                oddcount++;
            }
        }

        if((x%2==0&&y%2==0)||(x%2!=0&&y%2!=0))
        {
            if(oddcount%2)
            {cout<<"Bob"<<endl;}
            else{cout<<"Alice"<<endl;}
            continue;
        }
        
        if((x%2==0&&y%2!=0)||(x%2!=0&&y%2==0))
        {
            if(oddcount%2)
            {
                cout<<"Alice"<<endl;
            }
            else{cout<<"Bob"<<endl;}

        }
    
    }

    return 0;
}