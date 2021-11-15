#include<iostream>

using namespace std;

class Box;
ostream& operator<<(ostream& out, Box& B);
class Box{
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
int length;
int breadth;
int height;
// The class should have the following functions : 
public:
// Constructors: 
Box(){length=0,breadth=0,height=0;}
Box(int l,int b,int h){length=l,breadth=b,height=h;}
Box(Box& b){length=b.length,height=b.height,breadth=b.breadth;}



 int getLength(){return length;} // Return box's length
 int getBreadth (){return breadth;} // Return box's breadth
 int getHeight (){return height;}  //Return box's height
 long long CalculateVolume(){return(long long) length*breadth*height;} // Return the volume of the box

//Overload operator < as specified
bool operator<(Box& b)
{if(length==b.length)
{if(breadth==b.breadth)
{if(height < b.height)
{return 1;}
else{return 0;}
}else if(breadth < b.breadth)
{return 1;}
else{return 0;}
}else if(length< b.length)
{return 1;}
else{return 0;}
}

friend ostream& operator<<(ostream& out, Box& B);
};
//Overload operator << as specified
ostream& operator<<(ostream& out, Box& B)
{out<<B.length<<" "<<B.breadth<<" "<<B.height<<" ";
return out;}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}