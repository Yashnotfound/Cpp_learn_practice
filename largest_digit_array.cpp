# include <iostream>
# include <vector>
# include <algorithm>
# include <string>
using namespace std;


int val_compare (string X, string Y)
{
    string XY = X.append(Y);
    
    string YX = Y.append(X);

    return XY.compare(YX) > 0 ? 1 : 0;

}

 
int main(){
    
int t;
cin>>t;

while(t--)
{
    vector <string> vec;
    int n;
    cin>>n;
    string temp;

    for (int i= 0; i<n ; i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }
    
   sort(vec.begin(),vec.end(),val_compare);

    for (int i = 0; i < n ; i++)
    {
        cout<<vec[i];
    }
    
}
    return 0;
}