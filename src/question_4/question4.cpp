#include "question4.h"
#include <iostream>
#include <string>
using namespace std;

bool test_config()
{
    return true;
}

string get_factorial_sequence(int num)
{

    // Var Dec
    string factorial_temp;
    string factorial;
    int sum = 1;
    //=============================================================

    for(int i = 1; i <= num; ++i) 
    { 

        sum *= i;
    
        factorial_temp = to_string (i);
        factorial += factorial_temp;

        if( i == num){}
        else
        {
            
            factorial += "x";
    
        }
        
    }
    factorial +=  "=";
    factorial  += to_string(sum);

return factorial;
}