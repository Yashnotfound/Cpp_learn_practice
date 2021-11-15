#include <iostream>
using namespace std;

int main()
{

float i;
int a;
char c;
cout << "Enter initial amount present in your account: ";
cin >> i;
if (i >= 2000)
cout << "enter valid amount:";
else
{
c='y';}

while (c=='y')
{

cout << "\nEnter amount to be withdrawn :";
cin >> a;
if (a >= i)
{
cout << "\nINSUFFICIENT FUNDS";
}
else if (a % 5 == 0)
{
cout << "\nTRANSACTION SUCCESSFUL";
cout << "\nBalance amount :" << (i - (a + 0.5));
i = i- (a + .5);
}
else
{
cout << "\nINCORRECT WITHDRAWAL AMOUNT(ENTER A MULTPLE OF 5)\n";
}
cout << "\nDo you want to continue (y/n):";
cin >> c;
}return 0;
}
