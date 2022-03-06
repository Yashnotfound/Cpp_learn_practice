# include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        bool flag=0;
        string a;
        string s;
        vector<int> ans;
        cin>>a>>s;
        if(a.length()>s.length())
        {
            cout<<-1<<endl;
            continue;
        }

        reverse(a.begin(),a.end());
        reverse(s.begin(),s.end());

        for (int i = 0,j=0; i < s.size(); i++,j++)
        {
            if(i==(s.size()-1)&&j<=(a.size()-1))
            {
                if(j==(a.size()-1)&&a[j]>s[i])
                {
                    flag=1;
                    break;    
                }
                
            }

            if(s[i]>a[i])
            {
                ans.push_back(s[i]-a[j]);
            }
            else{
                int temp = (s[i+1]-'0')*10+s[i]-'0';
                temp -=(a[i]-'0');
                ans.push_back(temp);
                i++;
            }
            if(j>=a.size())
            {
                ans.push_back(s[i]);
            }

        }
        


    }

    return 0;
}