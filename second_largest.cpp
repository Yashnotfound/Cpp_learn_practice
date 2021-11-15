# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;
int main() {

int n;
cin>>n;
while(n--)
{
    int temp;
    vector<int> vec;

    for (int i = 0; i < 3; i++)
    {
        cin>>temp;
        vec.push_back(temp);
    }

    sort(vec.begin(),vec.begin() +3);

    cout<<vec[1]<<endl;
    
}


return 0;
}