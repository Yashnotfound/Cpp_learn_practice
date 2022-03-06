# include <bits/stdc++.h>
#define ll long long
using namespace std;
int bin_search(string str,int left,int right)
{
    int middle = left+(right-left)/2;
    if(str[middle] != str[middle+1] && str[middle]!=str[middle-1])
    {
        return middle;
    }
    if((str[middle]==str[middle+1] && middle%2 == 0)|| str[middle]==str[middle-1] && middle%2 != 0)
    {
        return bin_search(str,middle,right);
    }
    else
    {
        return bin_search(str,left,middle);
    }
    


}
int main(){
    string str;
    cin>>str;
    cout<<bin_search(str,0,str.length()-1)<<" "<<str[bin_search(str,0,str.length()-1)];

    return 0;
}