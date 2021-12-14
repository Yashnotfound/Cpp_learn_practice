# include <iostream>
using namespace std;

int main(){
	
	int t;
	cin >>t;

	while(t--)
	{	
		int n;
		cin >>n;
		int i=0;
		int j=n-1;
		int flag=0;

		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		
		if(arr[0] != 1)
		{
			flag=1;
		}	

		while(i<j)
		{

		if(arr[i]!=arr[j] )
		{
			flag=1;
			break;
		}

		if(arr[i]!=arr[i+1] && arr[i+1]-arr[i] != 1)
		{
			flag=1;
			break;
		}

		i++;
		j--;	
		}

		if(arr[i]!=7)
		{flag=1;}

		if(!flag)
		{cout<<"yes"<<endl;}
		else{cout<<"no"<<endl;}
	}

	
	return 0;
}