# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len= s.length();
        if(len<10)
        {cout<<s<<endl;}
        else
        {
            string::iterator it = s.begin();
            cout<<*(it)<<len-2<<*(it+len-1)<<endl;
        }
    }

    return 0;
}