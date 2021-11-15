#include <iostream>
using namespace std;
int largest_number(int a,int b,int c,int d, int e);
int glo =5; 
int main() 
{
int a,b,c,d,e;
int glo=3;
cout<<"please write 5 numbers\n";
cin>>a>>b>>c>>d>>e;
printf("largest number is: ");
cout<<largest_number(a,b,c,d,e); 
cout<<glo;
return 0;
}

int largest_number(int a,int b,int c,int d, int e)
{
int max_value;
max_value=(max(max(a,b),max(c,d)),e);
return max_value;

// int max;
// if(a>b){max=a;}
// else{max=b;}
// if(c>max){max=c;}
// if(d>max){max=d;}
// if(e>max){max=e;}
// return max;
}



