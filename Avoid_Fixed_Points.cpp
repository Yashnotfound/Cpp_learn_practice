# include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(auto &it : arr)
        {
            cin>>it;
        }
        int counter=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==i+1+counter)
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }

    return 0;
}