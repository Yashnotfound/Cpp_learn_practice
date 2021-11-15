# include <iostream>
using namespace std;
void swap(int, int);
void swap_pointer(int* a,int* b);

int main(){ 
    int x=5,y=6;
    cout<<"the value of x and y before swapping is "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"value of x and y while calling by value is "<<x<<" "<<y<<endl;
    swap_pointer(&x,&y);
    cout<<"value of x and y while calling by pointer is "<<x<<" "<<y<<endl;

    return 0;
}

void swap(int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
}


void swap_pointer(int* a,int* b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
