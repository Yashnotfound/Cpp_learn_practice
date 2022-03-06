# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        float n,bus,car;
        cin>>n>>bus>>car;
        ll sum=0;
        
        while(n>100)
        {
            if(bus>25*car)
            {
                sum+=25*car;
            }
            else{sum+=bus;}
            n-=100;
        }

        if(bus*ceil(n/100)>car*ceil(n/4))
        {
            sum+=car*ceil(n/4);
        }
        else{sum+=bus*ceil(n/100);}

        cout<<sum<<endl;
     
    }
    return 0;
}