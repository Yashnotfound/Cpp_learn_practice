#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
int size_array;                                  //defining size
cout<<"type the size of the array"<<endl;         
cin>>size_array;                                 //inputting size 
int arr[size_array];                            //defining array       
for(int i=0;i<size_array;i++)                   //inputting array
{
cout<<"type "<<i<<" index\n";
cin>>arr[i];
}

cout<<"reversed array is \n";

for(int out=(size_array-1);out>=0;out--)         //outputting array
{cout<<arr[out]<<" ";}    

return 0;







}