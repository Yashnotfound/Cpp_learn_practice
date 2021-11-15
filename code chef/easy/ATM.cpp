#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	float balance,tax;
	int amount;
	tax=0.5;
	
    scanf("%i %f",&amount,&balance);
	
	if(((amount+tax)<=balance)&& amount%5==0)
	{balance=balance-amount-tax;
	printf("%f",balance);}
	
	else{cout<<balance;}
	
	return 0;
	
}
