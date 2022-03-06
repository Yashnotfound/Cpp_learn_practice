# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector< vector<int> > out;
    while(n--)
    {
        int nsize;
        cin>>nsize;
        vector<int> in (nsize);
        for(auto &it : in)
        {
            cin>>it;
        }
        out.push_back(in);
    }
    while(q--)
    {
        int i,j;
        cin>>i>>j;
        cout<<out[i][j]<<endl;
    }
    return 0;
}