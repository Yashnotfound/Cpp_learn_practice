# include <iostream>
# include <vector>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> vec;
        long int n,k;
        cin>>n>>k;
        if(k>n)
        {
            k%=n-2;
        }
    for (int i = 1; i <= n; i++)
    {
    vec.push_back(i);
    }
    
    while(k--)
        {
            for (int i = 1,j=n/2; i < n/2; i++,j++)
            {
               swap(vec[i],vec[j]); 
            }
        
        }

        for (auto i : vec)
        {
            cout<<i<<" ";
        }
        
    }

    return 0;
}