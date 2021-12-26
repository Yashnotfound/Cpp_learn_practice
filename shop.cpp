# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>
# include <vector>
# include <algorithm>
 
using namespace std;
const int gst = 18;

class shop{
 
int itemno;
int price; 
string item_name;
int taxed_price;
public :

void input ()
{
    cout<< "enter the item ID for item : ";
    cin >> itemno;
    cout<< "enter item name : ";
    cin >> item_name;
    cout <<"enter item price without tax : ";
    cin >> price;
}
 
int calculate()
{
    taxed_price = price + price*gst/100;
    return taxed_price;
}
 
string ret_itemname()
{return item_name;}

int ret_itemno()
{return itemno;}

int ret_itemprice()
{return price;}

void display()
{

cout<<"item number : "<<itemno<<endl;
cout<<"item name : "<<item_name<<endl;
cout<<"item price without tax : "<<price<<endl;
cout<<"item price after tax : "<<calculate()<<endl; 

}

};
 
void menu();
void query_num(vector<shop>,int);
bool pricesort(shop &s1,shop &s2);
void query_name(vector<shop>,string);
void query_sort(vector<shop>);
 
int main(){

int choice=0;
 vector <shop> s;
int num;
int search_num;
string search_name;

do
{
system("cls");

menu();
cin >> choice;
switch (choice) 
{case 1 : cout<<"enter the number of products : ";
         cin >> num;
         for (int i = 0; i < num; i++)
         {  shop temp;
            temp.input();
            s.push_back(temp);
            system("cls");
         }
            break; 

case 2 :  cout<<"enter the item ID of product you want to search : ";
          cin>>search_num;
          query_num(s,search_num);
            break;         

case 3 : cout<<"enter the name of the item you want to search : ";
         cin>>search_name;
         query_name(s,search_name);
            break;

case 4 : cout<<"sorting item name and number by price : "<<endl;
         query_sort(s);
            break;

case 5 : cout<<"Exiting the program ";
            break;

default : cout<<"please try again ";
          system("pause");     
    
}
 
 
}

while(choice !=5);




    return 0;
}
 
void menu()
{
    cout<<"\n\t\t\t menu";
    cout<<"\nenter 1 to input the number and data of products ";
    cout<<"\nenter 2 to search index using product ID ";
    cout<<"\nenter 3 to search index using  product name ";
    cout<<"\nenter 4 to sort product ID and name by price";
    cout<<"\nenter 5 to exit the program \n";
} 
 
void query_num(vector<shop> s,int query)
{
    int flag=0;
    for (int i = 0; i < s.size(); i++)
    {
        int x=s[i].ret_itemno();
        if(query==x)
        {
            s[i].display();
                flag=1;
                break;
        }
    }        if(flag==0)
            {cout<<"Invalid ID number,please try again. ";}
            system("pause");
}

void query_name(vector<shop> s, string name)
{
    int flag=0;
    for (int i = 0; i < s.size(); i++)
    {
        string str = s[i].ret_itemname();
        if(name==str)
        {
            s[i].display();
            flag=1;
            break;
        }
    }       if(!flag)
    {cout<<"invalid name, please try again. "<<endl;}
    system("pause");
}
 
void query_sort(vector<shop> s)
{
    sort(s.begin(),s.end(),pricesort);
    for (int i = 0; i < s.size(); i++)
    {
        s[i].display(); 
        cout<<"*************************"<<endl;
    }
        system("pause");
    

}    
    
bool pricesort(shop &s1,shop &s2)
{
    return s1.ret_itemprice() < s2.ret_itemprice();
}
