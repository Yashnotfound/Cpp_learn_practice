#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	long int arr[n];
	for (int i=0;i<n;i++) 
	{
	    cin>>arr[i];
	}
	
    sort(arr,arr+n);
    
	 long int ans1 = arr[n-1]*(arr[n-2]-arr[0]);
     long int ans2 = arr[n-2]*(arr[n-1]-arr[0]);

    cout<<max(ans1,ans2)<<endl; 

	}
	return 0;
}
