# include <iostream>
# include <set>
# include <algorithm>
# include <unordered_set>
# include <vector>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        multiset<int> set1;
        
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            set1.insert(temp);
        }

        cin>>m;
        vector <int> set2(m);

        for (int i = 0; i < m; i++)
        {
            int temp;
            cin>>temp;
            set2.push_back(temp);
        }
        vector<int>:: iterator it;
        for ( it = set2.begin(); it != set2.end(); it++)
        {
            int rep = count(set1.begin(),set1.end(),*it);
            for (int i = 0; i < rep; i++)
            {
                cout<<*it<<" ";
            }
            
            set1.erase(*it);
        }

        multiset<int>:: iterator i = set1.begin();

        for (i; i!=set1.end() ; i++)
        {
            cout<<*i<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}