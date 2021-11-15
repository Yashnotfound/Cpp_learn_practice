# include <iostream>
using namespace std;
int main() {
int even = 0;
int odd = 0;
int n;
cin>>n;
int input[n];
for (int i = 0; i < n; i++)
{
    cin>>input[i];
}
for (int i = 0; i < n; i++)
{
    if(input[i]%2==0)
    {even++;}
    else{odd++;}
}

if(even > odd)
{cout<<"READY FOR BATTLE";}
else{cout<<"NOT READY";}

return 0;
}