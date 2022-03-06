# include <bits/stdc++.h>
using namespace std;
# define ll long long
int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >>n;
        ll arr[n];
        ll arr1[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        vector<vector<ll> > out (32) ;
        
        for(int it=0; it<n; it++)
        {   
            
            ll cpy=arr[it];
            int i=0;
            while(cpy)
            {   
                if(cpy%2==1)
                {out[i].push_back(arr[it]);}
                cpy = cpy >> 1;
                i++;
            }
        }

        sort(arr,arr+n);

        for (int i = 0; i < n; i++)
        {   cout<<i<<"-> ";
            for (auto it : out[i])
            {
                cout<<it<<" ";
            }
            cout<<endl;    
        }
        
        for (int i = 0; i < n; i++)
        {
            
        }
        





    }

    return 0;
}