# include <iostream>
# include <string>
# include <cmath>
# include <vector>
using namespace std;

int main(){

    string str;
    vector <char> rev;
    int temp;
    int input;
    int j=0;

    cin>>str;

    for (int i = str.length()-1; i >= 0; i--)
    {
        rev[j]=str[i];
        j++;
    }

   for (int i = 0; i < rev.size(); i++)
   {
       cout<<rev.at(i);
   }
   

    return 0;
}