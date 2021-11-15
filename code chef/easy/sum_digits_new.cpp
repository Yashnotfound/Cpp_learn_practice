# include <iostream>
using namespace std;

int main(){

    int input_no;
    int mod;
    int counter=0;
    int no_values;
   
    cin>>no_values;
    
    int arr[no_values];
    for (int i = 0; i < no_values; i++)

    { cin>>input_no;

    while(input_no>0)
    {
    mod=input_no%10;
    counter+=mod;
    input_no/=10;
    }
    printf("%d\n",counter);
    counter=0;
    
    
    }
    return 0;
}