# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        string rev=str;
        reverse(rev.begin(),rev.end());
        int pal=0;
        int j=0;
        for (int i = 0; i < str.size(); i++)
        {
            if(str[i]==rev[j])
            {
                j++;
            }
            else{pal++;}
        }
        cout<<pal<<endl; 
    }
    return 0;
}