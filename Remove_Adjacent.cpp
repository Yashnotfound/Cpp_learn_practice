#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        vector<int> vec;
        int alt= n-1;
        int sum=0;
        for (int i = 0; i < n; i++)
        {   
            int temp;
            cin>>temp;
            vec.push_back(temp);
            sum+=temp;
        }


        if(sum<0)
        {
            for (int i = 0; i < n; i++)
            {
                vec[i]=-vec[i];
            }
            sum=-sum;
        }

        set<int> fac;
        if(sum==0)
        {
            fac.insert(0);
        }
        else{

            for (int i = 1; i <= sqrt(sum); i++)
            {
                if(sum%i==0)
                {
                    if(sum/i<=n)
                    {
                        fac.insert(i);
                    }
                    fac.insert(sum/i);
                }
            }
        }

        for (int i = 0; i < 2; i++)
        {
            
            set<int>::iterator it;
            for ( it = fac.begin(); it != fac.end(); it++)
            {   
                int counter=0;
                int sumeach=0;
                
                for (int j = 0; j < n; j++)
                {
                    sumeach+=vec[j];
                    if(sumeach==*it)
                    {
                        counter++;
                        sumeach=0;
                    }
                }
                if(*it!=0)
                {
                    if(counter==sum/(*it))
                    {
                        alt=min(alt,n-counter);
                        break;
                    }
                }
                else{
                    alt=min(alt,n-counter);
                    break;
                }

            }
                reverse(vec.begin(),vec.end());

        }
            cout<<alt<<endl;
    }

}