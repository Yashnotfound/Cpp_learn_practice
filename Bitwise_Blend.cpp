# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int odd1=-1;
        int odd2=-1;
        vector<int> def1;
        vector<int> def2;
    
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if(i%2!=0)
            {
                if(arr[i]%2==0)
                {
                    def1.push_back(i+1);
                }
                else{
                    def2.push_back(i+1);
                    odd1=i+1;
                }
            }
            if(i%2==0)
            {
                if(arr[i]%2!=0)
                {
                    def1.push_back(i+1);
                    odd2=i+1;
                }
                else{
                    def2.push_back(i+1);
                }
            }
        }

        if(def1.size()>def2.size()&&odd2!=-1)
        {
            cout<<def2.size()<<endl;

            for (int i = 0; i < def2.size(); i++)
            {
                cout<<def2[i]<<" "<<odd2<<endl;
            }    
        }

       else if(odd1!=-1)
        {
            cout<<def1.size()<<endl;

            for (int i = 0; i < def1.size(); i++)
            {
                cout<<def1[i]<<" "<<odd1<<endl;
            }    
        }

        else{cout<<-1<<endl;}

        
    }

    return 0;
}