#include <iostream>
#include <math.h>
using namespace std;

class reverse
{
    int input;
    int arr[30];
    int reverse = 0;
    int counter = 0;

public:
    void inputfunc() { cin >> input; }
    void checkint()
    {
        while (input%10==0)
        {
            input/=10;
        }
    } 
    void inputarray()
    {
        while (input > 0)
        {
            arr[counter] = input % 10;
            input /= 10;
            counter++;

        }
    }

    void reset(){counter=0;} 


    void conversionarr()
    {
        for (int i = 0; i < counter; i++) 
        {
            cout << arr[i];
        }
        cout << endl;
    }
};

int main()
{
    reverse obj;
int numb;
cin>>numb;
for(int i=0;i<numb;i++)
   { obj.inputfunc();
    obj.checkint();
    obj.inputarray();
    obj.conversionarr();
    obj.reset();
    }
    return 0;
}