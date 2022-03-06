# include <bits/stdc++.h>
using namespace std;
bool comp(pair<float,int>a, pair<float,int> b)
{
    if(a.first==b.first)
    {
        return a.second < b.second;
    }
    return a.first < b.first;
}
int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<float,int> > vec;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            vec.push_back({sqrt(pow(x,2)+pow(y,2)),x+y});
        }
        
        sort(vec.begin(),vec.end(),comp);
        int sum=0;
        for (int i = 0; i < k; i++)
        {
            sum+=vec[i].second;
        }
        
        cout<<sum<<endl;
        

    }

    return 0;
}