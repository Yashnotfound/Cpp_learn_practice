# include <iostream>
using namespace std;

int main(){
    
    int n;
    int input;
    int temp;
    cin>>n;
    while(n--)
    {
        int sum =0;
        cin>>input;
        while(input)
        {
            temp = input%10;
            input /= 10;
            sum += temp;
        }
cout<<sum;
    }
    return 0;
}