# include <iostream>
# include <queue>
using namespace std;

int main(){
    
    int n;
    cin>>n;   
    queue<string> q;
    q.push("5");
    q.push("6");
    for (int i = 0; i < n; i++)
    {
        string str = q.front();
        cout<<str<<" ";
        q.pop();
        q.push(str+'5');
        q.push(str+'6');
    }
    
    return 0;
}