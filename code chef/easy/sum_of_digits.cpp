# include <iostream>
# include <math.h>
using namespace std;

int main()

{
int input;
int mod;
int counter=0;
int no_terms;

cin>>no_terms;
int arr[no_terms];

for(int j=0;j<no_terms;j++)

{
cin>>input;

do
{
    mod=input%10;
    input=(input-mod)/10;
    counter=counter+mod;
    if(input/10<1)
    {counter=counter+input;
    break;}
    }
    while(input>10);

arr[j]=counter;
counter=0;
}
for(int fuck=0;fuck<no_terms;fuck++)
{cout<<arr[fuck]<<endl;}
    return 0;
}