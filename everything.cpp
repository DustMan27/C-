#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "hello world!" << "\n";
    cout << "here's a second line." << endl;

    //just basic outputting of text with the two different ways to create a line.
    /* here's how you can do notes on multiple lines!
    look it's still going!*/

    //now lets declare some varibales.
    int x = 5;
    int y = 8;
    int z = 10;
    char a = 'A';
    cout << "The value of 'x' is: " << x << endl;
    cout << "The value of 'y' is: " << y << endl;
    cout << "The value of 'z' is: " << z << endl;

    //now lets change one@

    cout << "Enter the new value of x: ";
    cin >> x;
    cout << "The value of 'x' is: " << x << endl;

    //now let's output a string var and then change it.

    cout << "What's your name?" << endl;
    string name = "unknown";
    cout << "Enter name: ";
    cin >> name;
    cout << endl << "So your name is " << name << "!";
    cout << endl << "Let's call you something more casual, what's your nickname?" << endl;
    cout << "Enter nickname: ";
    cin >> name;
    cout << endl;
    cout << "Okay let's call you " << name << " from now on!" << endl;

    //now some simple math.

    cout << "The value of x and y is: " << x + y << endl;

    //now for an if statement

    if (x > 10){
        cout << "Looks like x is greater than 10 because it's value is: " << x;
    } else {
        cout << "Looks like x is less than 10 because it's value is: " << x << "\n\n";
    }

    //shorthand if statements!

    int time = 20;
    cout << "What's the time by hour right now? (00 - 23): ";
    cin >> time;
    string timeresult = (time < 18)?"Good day!":"Good evening!";
    cout << endl << timeresult;

    //now let's do some switches!

    cout << "\n\nplease enter your timezone. EU (1) & US (2) :";
    int timezone = 0;
    cin >> timezone;
    cout << endl;
    switch (timezone){
    case 1:
        cout << "So you're in the EU Zone.";
        break;
    case 2:
        cout << "So you're in the US Zone.";
        break;
    default:
        cout << "That makes no sense!" << endl;
    }

    return 0;
    }
