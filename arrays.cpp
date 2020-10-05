#include <iostream>
using namespace std;

void MyFunction(){
    cout << "I just got executed!";
}

int main(){
    string cars[4] = {"volvo", "bmw", "ford", "mazda"};
    for (int i = 0; i<4; i++){
        cout << cars[i] << "\n";
    }
    MyFunction();
    return 0;
}
