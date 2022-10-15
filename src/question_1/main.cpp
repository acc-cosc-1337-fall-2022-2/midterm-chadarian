#include "question1.h"
#include <iostream>
#include <string>

using std::cout; 
using std::cin;
using std::string;





int main()
{

    // Var dec
    double sales;
    int reply, exit = 0;

    do
    {

        cout << "\nTo get sales Commission please enter 1 \n";
		cout << "To Exit enter 2 \n\n";
		cin >> reply;

		if (reply == 1)
		{

			// ask for user input
            cout << "Please enter your sales amount: ";
            cin >> sales;

            // func call
            cout << "Your sale of " << sales << " has a commission amount of " << get_sales_commission(sales) << "\n";

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