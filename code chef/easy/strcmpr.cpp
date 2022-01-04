# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1;
        string s2;
        cin>>s1>>s2;
        int counter=0;
        int total=0;
        for (int i = 0; i < n; i++)
        {   
            if(s2[i]==s1[i])
            {counter++;}
            if(s2[i]>s1[i])
            {
                total+=counter+1;
                counter=0;
            }
            if(s2[i]<s1[i])
            {
                counter=0;
            }   
        }
        
        cout<<total<<endl;

    }

    return 0;
}