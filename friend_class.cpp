#include <iostream>
using namespace std;

class marks; //class decleration

class compare
{
public:
    void comp(marks m1, marks m2);
    int percent(marks, marks);
};

class marks
{

    int maths;
    int physics;
    int chem;

public:
    // individual friend function decleration.
    //friend void compare:: comp(marks,marks);
    //friend int compare:: percent(marks,marks);

    //aliter: declaring class as a friend.
    friend class compare;

    void marksin(int a, int b, int c)
    {
        maths = a;
        physics = b;
        chem = c;
    }
};

void compare::comp(marks m1, marks m2)
{
    if (m1.maths > m2.maths)
    {
        cout << "term 1 maths marks are greater than term 2. " << endl;
    }
    else
    {
        cout << "term 2 maths marks are greater than term 1. " << endl;
    }
    if (m1.physics > m2.physics)
    {
        cout << "term 1 physics marks are greater than term 2. " << endl;
    }
    else
    {
        cout << "term 2 physics marks are greater than term 1. " << endl;
    }
    if (m1.chem > m2.chem)
    {
        cout << "term 1 chemistry marks are greater than term 2. " << endl;
    }
    else
    {
        cout << "term 2 chemistry marks are greater than term 1. " << endl;
    }
}

int compare::percent(marks m1, marks m2)
{
    cout << "total percentage in 1st term is " << (m1.maths + m1.physics + m1.chem) / 3 << endl;
    cout << "total percentage in 2nd term is " << (m2.maths + m2.physics + m2.chem) / 3 << endl;

    return 0;
}

int main()
{
    marks m1, m2;
    compare c1;

    m1.marksin(45, 80, 67);
    m2.marksin(56, 89, 45);

    c1.comp(m1, m2);
    c1.percent(m1, m2);

    return 0;
}