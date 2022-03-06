# include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> val;
        int counter=1;
        int mx = 2*n;
        int index=mx-1;
        for (int i = 0; i < 2*n; i++)
        {
            int temp;
            cin>>temp;
            val.push_back(temp);
        }
        
        sort(val.begin(),val.end());

         if(val[0]!=0)
         {
             cout<<"YES"<<endl;
             continue;
         }
        
        for(int i=0;i<2*n-1;i++)
        {
            if(val[i+1]!=val[i]+1&&val[i+1]!=val[i])
                {
                    index=i;
                    break;
                }
        }

        for (int i = 0; i < index; i++)
        {
            if(val[i]==val[i+1])
            {
                counter++;
            }
            else{
                mx=min(mx,counter);
                counter=1;}  
        }

        mx=min(mx,counter);
        if(mx<2)
        {
            cout<<"NO"<<endl;
        }
        else{cout<<"YES"<<endl;}
        

    }

    return 0;
}