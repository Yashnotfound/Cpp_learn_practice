# include <iostream>
using namespace std;

int main(){
    
 int n;
 int query;
 int index1;
 int index2;
 cin>>n>>query;

 int arr[n][100000];

for (int i = 0; i < n; i++)
{
    int len;
    cin>>len;
    for (int j = 0; j < len; j++)
    {
        cin>>arr[i][j];
    }
    
}

while(query--)
{
cin>>index1;
cin>>index2;

cout<<arr[index1][index2]<<endl;
}
    return 0;
}