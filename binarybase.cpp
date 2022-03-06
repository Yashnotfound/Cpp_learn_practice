# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        int n,k;
        cin>>n>>k>>str;
        int start=0;
        int end=n-1;
        int counter=0;

        while(start<end)
        {
            if(str[start]!=str[end])
            {counter++;}
            start++;
            end--;
        }

        if(counter>k)
        {
            cout<<"NO"<<endl;
            continue;
        }

        if(n%2)
        {
            cout<<"YES"<<endl;
            continue;
        }

        if((k-counter)%2)
        {cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
    }
    return 0;
}