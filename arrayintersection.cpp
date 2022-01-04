# include <iostream>
# include <set>
# include <vector>
# include <algorithm>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {   int n,m;
        cin>>n>>m;
        int arr1[n];
        int arr2[m];
        int final[m];
        vector<int>sex;
        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
        }
        
        for (int i = 0; i < m; i++)
        {
            cin>>arr2[i];
        }

        sort(arr1,arr1+n);
        sort(arr2,arr2+m);

        int index=0;
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = flag; j < m; j++)
            {
                if(arr1[i]==arr2[j])
                {
                    final[index]=arr1[i];
                    index++;
                    flag=j+1;
                    break;
                }
            }
        }
        
        for (int i = 0; i < index; i++)
        {
            cout<<final[i]<<" ";
        }
        
    }

    return 0;
}