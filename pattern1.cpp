# include <iostream>
using namespace std;
int main() {

char ch='*';
int n;
cin>> n;
int temp2=n;
while(n--)
{
int temp1=n;
    for (int j = 0; j <temp2-temp1 ; j++)
    {
        cout<<"  ";
    }
for (int i = temp1; i >= 0; i--)
{
    cout<<"fuck"<<" ";
}
cout<<endl;
}


return 0;
}