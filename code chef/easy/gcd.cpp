# include <iostream>
# include <algorithm>
using namespace std;

int main(){
    
    int t;
    cin >>t;
    while(t--)
    {
        int k;
        int l,r;
        cin>>l>>r>>k;

        int dif = r-l+1;

        if(dif==1)
        {
            if (l==1)
            {
                cout<<"NO"<<endl;
                continue;
            }
            else
            {
                cout<<"YES"<<endl;
                continue;
            }
        }

        if(dif%2==1)
        {
            int odd;
            if(l%2==1)
            {
             odd = (dif/2+1);
            }
            else
            {
             odd = dif/2;   
            }    
                if(k>=odd)
                {
                    cout<<"YES"<<endl;
                    continue;
                }
                else
                {
                    cout<<"NO"<<endl;
                    continue;

                }
            
        }

        if(dif%2==0)
        {
          int odd = dif/2;    
          if(k>=odd)
          {
              cout<<"YES"<<endl;
              continue;
          }  
            else
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
    }

    return 0;
}