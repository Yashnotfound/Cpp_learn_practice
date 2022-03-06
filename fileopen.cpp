# include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ifstream iff;
    ofstream off;
    string str;
    iff.open("file1.txt");
    off.open("file2.txt");
    int counter = 0;
    while(getline(iff,str))
    {
        off<<" "<<str<<endl<<endl;
        counter++;
    }
    cout<<counter;

    return 0;
}