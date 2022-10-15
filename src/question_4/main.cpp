#include "question4.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Var dec
    int factorial;
    int reply, exit = 0;

    do
    {

        cout << "\nTo get factorial sequence please enter 1 \n";
		cout << "To Exit enter 2 \n\n";
		cin >> reply;
        cout << "\n";

		if (reply == 1)
		{

			// ask for user input
            cout << "Please enter a number between 1 and 10 : ";
            cin >> factorial;
            if(factorial > 10)
            {
                cout << "=========================================\n";
                cout << "please enter a number between 1 and 10\n";
                cout << "=========================================\n";
            }
            else if(factorial < 1)
            {
                cout << "=========================================\n";
                cout << "please enter a number between 1 and 10\n";
                cout << "=========================================\n";
            }
            else
            {
                cout << "your factorial sequence number is : " << get_factorial_sequence(factorial) << "\n";
            }

            

		}

        if (reply == 2)
		{

			string exit_reply;

			cout << "Are you sure you want to exit? Please type yes or no in lowercase\n";
			cin >> exit_reply;
			if (exit_reply == "yes")
			{
				cout << "Goodbye\n";
				exit = 1;
			}
			
			else if (exit_reply == "no")
			{
				cout << " Back to the menu\n";
			}

			else
			{
				cout <<"=================================\n";
				cout << "Make sure you use lower case\n";
				cout <<"=================================\n";
			}
		}

    }
    while (exit == 0);
    return 0;
}