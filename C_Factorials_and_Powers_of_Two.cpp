# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> power;
        power.push_back(1);
        vector<ll> fac;
        fac.push_back(1);
        ll i=1; 
        int j=2;
        ll factorial=1;
        while(i<n)
        {
            i*=2;
            power.push_back(i);
        }
        while(factorial<n)
        {
            factorial*=j++;
            fac.push_back(factorial);
        }
         
        int count=0;
        auto it1 = power.end();
        auto it2 = fac.end();
        while(n>0)
        {
            it1 = lower_bound(power.begin(),next(it1,1),n);
            it2 = lower_bound(fac.begin(),next(it2,1),n);
            if(*it1!=n)
            {it1--;}
            if(*it2!=n)
            {it2--;}
            cout<<*it1<<" "<<*it2<<endl;
            n-=max(*it1,*it2);
            count++;
            cout<<n<<endl;
        }
        cout<<count<<endl;
    }
    return 0;
}