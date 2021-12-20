#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{cin>>arr[i];}

int t;
cin>>t;
while(t--)
{
int i1,i2;
cin>>i1>>i2;
int sum=0;
for(int i=i1;i<=i2;i++)
{sum+=arr[i];}
cout<<sum<<endl;
}
return 0;
}

