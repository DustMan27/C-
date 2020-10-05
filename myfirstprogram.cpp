#include <iostream>
using namespace std;

int main() {
  cout << "\nHello World!\nI'm learning C++\nThat's very fun for me.\n"; //testing out the difference between /n and endl;
  int mynumber = 5; //this declares the variable which in this case is an integer (number with no decimals);
  cout << mynumber << endl;
  double doublenumber = 10.50;
  cout << doublenumber << endl;
  char character = 'a';
  cout << character << endl;
  string stringy = "Here's a string variable!";
  cout << stringy << endl;
  bool success = 1;
  cout << success << endl;
  cout << "by the way, I'm actually " << mynumber << " years old!";
  int supernumber = mynumber + doublenumber;
  cout << "just kidding I am " << supernumber + 12 << endl;
  return 0;
}
