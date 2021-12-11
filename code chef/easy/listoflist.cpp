# include <iostream>
# include <algorithm>
using namespace std;

int main() {

int t;
cin>>t;
while(t--)
{
    int n;
    cin >>n;
     int list[n];
     for (int i = 0; i < n; i++)
     {
         cin>>list[i];
     }

        sort(list,list+n);

     int counter=1;    
     int mx=1;
     int flag=0;
     for (int i = 1; i < n; i++)
     {
         if(list[i]==list[i-1])
         {
             counter++;
         }
         else{counter=1;}

         mx=max(counter,mx);
     }
if(n==mx)
{
    cout<<"0"<<endl;
    continue;
}
if(mx==1)
{
    cout<<"-1"<<endl;
    continue;
}
else
{ cout<<n-mx+1<<endl;}
     
}

return 0;
}