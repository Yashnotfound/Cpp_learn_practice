# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        if(k==0)
        {
            cout<<1<<endl;
            continue;
        }
        int counter=1;
        int low=0;
        int high=n-1;
            
            bool flag=0;
            while(low<high)
            {
                if(str[low]!=str[high])
                {
                    flag=1;
                    break;
                }
                low++;
                high--;
            }
            
            if(flag)
            {cout<<2<<endl;}
            else{cout<<1<<endl;}

    }
    return 0;
}