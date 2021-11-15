# include <iostream>
using namespace std;

int main(){
    
int test_cases;
int dividend;
int divisor;

cin>>test_cases;
for (int i = 0; i < test_cases; i++)
{ 
    scanf("%d %d",&dividend,&divisor);
    cout<<(dividend%divisor)<<endl;
} 



    return 0;
}