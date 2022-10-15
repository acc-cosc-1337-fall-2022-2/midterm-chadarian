#include "question2.h"

bool test_config()
{
    return true;
}

int get_fib_sequence(int num)
{

    int num1 = 0, num2 = 1, num3 = 0, i = 0;

    for(i = 1; i < num; ++i)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }

return num3;

}