
// KTTABLE

# include <iostream>
using namespace std;

int main(){

	int t;
	int sum=0;
	cin >>t;

	while(t--)
	{

int n;
cin>>n;
int a[n];
int b[n];

for(int i=0;i<n;i++)
{cin>>a[i];}

for(int i=0;i<n;i++)
{cin>>b[i];}

for (int i = 0; i < n; i++)
{
	if (i==0)
	{
		if(a[i]>=b[i])
		{
			sum++;
		}
	}
	else
		{
		if(a[i]-a[i-1]>=b[i])
		{
			sum++;
		}
	}
}
	cout<<sum<<endl;
	sum=0;

	}	

	return 0;
}