# include <iostream>
using namespace std;

int main(){

        int n,k;
        cin>>n>>k;
        int house1=1;
        int house2;
        long long int minroute=0;
        while(k--)
        {
            cin>>house2;
            if(house2>house1)
            {minroute+=(house2-house1);}
            else if(house1==house2)
            {continue;}
            else
            {
             minroute+=n-house1+house2;   
            }
            house1=house2;
        }
            cout<<minroute;
}