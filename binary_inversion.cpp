#include <iostream>
#include <string>
#include <cstring>
#include <conio.h>
using namespace std;

class binary
{
private:
  void chk_binary();
  string bin_input;

public:
  void input_no();
  void inversion();
  void display();
} binary1;

int main()
{
  binary1.input_no();
  //binary1.chk_binary();
  binary1.inversion();
  binary1.display();
  system("pause");

  return 0;
}

void binary ::input_no()
{
  cout << "enter a binary number" << endl;
  cin >> bin_input;
}
void binary ::chk_binary()
{
  for (int i = 0; i < bin_input.length(); i++)
  {
    if (bin_input.at(i) != '0' && bin_input.at(i) != '1')
    {
      cout << "Given number is not binary ";
      exit(0);
    }
  }
}
void binary ::inversion()
{
  chk_binary();

  for (int i = 0; i < bin_input.length(); i++)
  {
    if (bin_input.at(i) == '0')
    {
      bin_input.at(i) = '1';
    }

    else
    {
      bin_input.at(i) = '0';
    }
  }
}
void binary ::display()
{
  cout << "The inverted binary number is: ";
  for (int i = 0; i < bin_input.length(); i++)
  {
    cout << bin_input.at(i);
  }
  cout << endl;
}