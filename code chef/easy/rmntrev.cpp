# include <iostream>
# include <algorithm>
using namespace std;

int main(){
      
    int t;
    cin>>t;
    while (t--)
    {  
        int n;
        int q;
        cin>>n>>q;
        string str;
        string output="";
        cin>>str;
        if(q%2==0)
        {   int i=1; 
            int start=q/2;
            int loop=(start)-1;
            output+=str[start];

            while(loop--)
            {
                output+=str[start-i];
                output+=str[start+i];
                i++;
            }
            output+=str[0];
        }
        else
        {
            int i=1;
            int start=q/2;
            int loop=(start);
            output+=str[start];

            while(loop--)
            {
                output+=str[start+i];
                output+=str[start-i];
                i++;
            }
        }

        output+=str.substr(q,n-1);
        cout<<output<<endl;
    }
    
    return 0;
}