# include <iostream>
using namespace std;

int* arra(int a)
{
   int *ar = new int [a];

   for (int i = 0; i < a; i++)
   {
       cin>>ar[i];
   }

   return ar;
}
 
int main(){
    int p;
    int *a = &p;

    // both are same
    cin>>*(a);
    cout<<p<<endl; 

    int *b = new int (23);

    cout << *(b)<<endl;

    int *arr = new int [4];

    arr[0] = 12;
    *(arr+1) = 2;
    *(arr+2) = 3;
    *(arr+3) = 4;
    
    for (int i = 0; i < 4; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    delete arr; 
    for (int i = 0; i < 4; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    
    int *ar = arra(3);

    cout<<*(ar)<<endl;
    cout<<*(ar+1)<<endl;
    cout<<*(ar+2)<<endl;
    
    return 0;
}