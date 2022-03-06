# include <iostream>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n%2&&k!=1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int counter1=0;
        int start=1;
        cout<<"YES"<<endl;

        if(k==1)
        {
            while(start<=n)
            {
                cout<<start<<endl;
                start++;
            }
            continue;
        }

        while(counter1<n)
        {
            int counter2=0;
            while(counter2<k)
            {
                cout<<start<<" ";
                counter2++;
                start+=2;
            }
            if(start>=n*k)
            {
                start=2;
            }
            cout<<endl;
            counter1++;
        }

    }

    return 0;
}