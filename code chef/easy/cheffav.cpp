# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        int len;
        string code = "code";
        string chef = "chef";
        cin>>len;
        cin>>str;
        int ans1=0;
        int ans2=0;
        for (int i = 0; i < str.length()-3; i++)
        {
            if(str.substr(i,4)==chef)
            {
                ans1=i;
                break;
            }
        }
        
        for (int i = 0; i < str.length()-3; i++)
        {
            if(str.substr(i,4)==code)
            {
                ans2=i;
                break;
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
        if(ans1>ans2)
        {cout<<"AC"<<endl;}
        else{cout<<"WA"<<endl;}
    }

    return 0;
}