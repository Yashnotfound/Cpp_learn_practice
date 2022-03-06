# include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int> xaxis;
        set<int> yaxis;
        for (int i = 0; i < n; i++)
        {
            int x,y;
            cin>>x>>y;
            xaxis.insert(x);
            yaxis.insert(y);
        }

        cout<<xaxis.size()+yaxis.size()<<endl;
    }

    return 0;
}