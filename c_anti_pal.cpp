# include <iostream>
# include <set>
# include <algorithm>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        if(n%2)
        {cout<<"NO"<<endl;
        continue;}
        sort(str.begin(),str.end());
        int mx=1;
        int counter=1;
        for (int i = 1; i < n; i++)
        {
            if(str[i]==str[i-1])
            {
                counter++;
            }
            else{counter=1;}
            mx=max(counter,mx);
        }
        
        if(mx>n/2)
        {
            cout<<"NO"<<endl;
        } 
        else{
            cout<<"YES"<<endl;
            for (int i = n/2-1; i >= 0; i--)
            {
                cout<<str[i];
            }
            for (int i =n/2 ; i < n; i++)
            {
                cout<<str[i];
            }
            cout<<endl;
        }


        


    }   
    return 0;
}