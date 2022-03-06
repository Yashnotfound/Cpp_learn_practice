# include <iostream>
# include <algorithm>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }

        sort(arr,arr+n);
        int counter=1;
        int mx=1;
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i]!=arr[i+1])
            {
                counter++;
            }
        }
        if(n%2==0)
        {
            if(counter>n/2)
            {cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
        else{
            if(counter>(n/2+1))
            {cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
        


    }

    return 0;
}