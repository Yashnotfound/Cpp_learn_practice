# include <iostream>
# include <stdbool.h>
using namespace std;

void inversebool(int n,bool arr[])
{
	for (int i = 0; i < n ; i++)
	{
		if(arr[i]==0)
		{arr[i]=1;}
		else{arr[i]=0;}
	}
}

int main(){
	
	int n;
	cin>>n;

	bool arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	inversebool(n,arr);

	for(auto i : arr)
	{cout<<i<<" ";}
	return 0;
} 