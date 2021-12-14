# include <iostream>
# include <list>
using namespace std;


void display(list<int> l)
{
    for(auto i : l)
    {cout<<i<<" ";}
    cout<< endl;
}


void display1(list <int> &lst)
{
    list<int> :: iterator it;
    it = lst.begin();

    for (it; it != lst.end() ; it++)
    {
        cout << *it<<" ";
    }    
    cout<<endl;
}

void remove (list <int> &lst)
{
    list<int> :: iterator it;
    it = lst.begin();
    lst.remove(2);
}


int main(){
    
    list <int> l;
    int n;
    cin >> n;
    int temp;

    for (int i = 0; i < n; i++)
    {   cin>>temp;
        l.push_back(temp);
    }
    
    display(l);
    display1(l);
    remove(l);
    display(l);



    return 0;
}