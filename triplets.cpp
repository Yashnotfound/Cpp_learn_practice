# include <iostream>
# include <algorithm>
using namespace std;
int main() {

int n;
cin>>n;
int array[n];

for (int i = 0; i < n; i++)
{
    cin>>array[i];
}
sort(array,array+n);

int target;
cin>>target;
for (int i = 0; i < n-2; i++)
{
    for (int j = i+1; j < n-1; j++)
    {
        for (int k = j+1; k < n; k++)
        {
            if(array[i]+array[j]+array[k]==target)
            {cout<<array[i]<<", "<<array[j]<<" and "<<array[k]<<endl;}
        }
    }
}
return 0;
}