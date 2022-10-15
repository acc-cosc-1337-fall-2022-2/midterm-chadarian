#include "question3.h"
#include <iostream>
#include <string>

using std::cout; 
using std::cin;
using std::string;

int main()
{

    string reply;
    int exit = 0;

do
{

    cout << "\nEnter Y to roll, make sure it's capital, enter anything else to end the program\n";
    cout << "Your response : " << "\n";
    cin >> reply;

    if(reply == "Y")
    {
        cout << "You roll the die and it lands on : " << roll_die() << "\n";
    }
    else
    {
        exit = 1;
    }

}
while (exit == 0);

    return 0;
}