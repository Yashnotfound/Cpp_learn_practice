# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     string str;
     cin>>n>>str;
     string ans="";
     ans+=str[0];
     for (int i = 0; i < n-1; i++)
     {
         if(str[i]!=str[i+1])
         {
             ans+=str[i+1];
         }
     }
     cout<<ans.size()<<endl;
     
 }   
    return 0;
}