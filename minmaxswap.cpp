# include <iostream>
# include <map>
# include <vector>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--)
    {
        vector< pair <int, string> > vec;
        for (int i = 0; i < 4; i++)
        {
            int n;
            string s;
            cin>>n>>s;
            vec.push_back({n,s});
        }
        
        for (int i = 0; i < 4; i++)
        {
            cout<<vec[i].first<<" "<<vec[i].second<<endl;
        }

    }

    return 0;
}