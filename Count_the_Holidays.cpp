# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int> hol{6,7,13,14,20,21,27,28};
        int arr[n];
        for(auto &it : arr)
        {
            cin>>it;
            hol.insert(it);
        }

        cout<<hol.size()<<endl;
    }
    return 0;
}