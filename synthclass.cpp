#include <iostream>
using namespace std;

class SynthClass{
public:
    string model;
    int price;
    int year;
    double vatprice;
};

int main(){
    double VAT = 0.20;
    SynthClass KorgMinipops;
    KorgMinipops.model = "Korg Minipops";
    KorgMinipops.price = 1200;
    KorgMinipops.year = 1982;
    KorgMinipops.vatprice = KorgMinipops.price + (KorgMinipops.price*VAT);
    cout << "Model: " << KorgMinipops.model << endl;
    cout << "Price: " << KorgMinipops.price << endl;
    cout << "Year: " << KorgMinipops.year << endl;
    cout << "Retail (plus VAT): " << KorgMinipops.vatprice;
    return 0;
    }
