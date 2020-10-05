#include <iostream>
using namespace std;
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}
int main(){
    myFunction("matthew");
    myFunction("john");
    myFunction("william");
    myFunction("green");
    return 0;
    }
