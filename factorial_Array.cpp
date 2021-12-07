#include<iostream>
using namespace std;

int main()
{
     int a[200],m,num,i=0,facnum;
    cin>>m;
    facnum=m;
   do
    {
        num=m%10;
        m/=10;
        a[i]=num;
        i++;
    }while(m>0);

    int pro;
    while (facnum>1) //using (facnum>1) instead of (facnum >0)
    {
        int temp=0;
        facnum--;  // are bc last iteration mein zero se hi multiply ho jayega agar (facnum>0)use karega to
        int index;
        for (index = 0; index < i; index++) // loop to multiply the current number with every digit stored in the array
        {
            pro=a[index]*facnum+temp;
            a[index]=pro%10;
            temp=pro/10;
        }

        while(temp) // handling exception for the last case dividing temp into individual squares.
        {
            a[index]=temp%10;
            temp=temp/10;
            i++;
            index++;
        }

    }
    for ( int j = i-1; j>=0 ; j--) // outputting the array
    {
        cout<<a[j];

    }
    return(0);
}