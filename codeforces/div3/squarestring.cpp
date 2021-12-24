# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {   bool b=0;
        string s;
        cin>>s;
        if(s.length()%2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for (int i = 0,j=s.length()/2; i < s.length()/2; i++,j++)
        {
            if(s[i]!=s[j])
            {
                b=1;
                break;   
            }
        }
        if(b)
        {cout<<"NO"<<endl;}
        else
        {cout<<"YES"<<endl;}

    }
 

    return 0;
}