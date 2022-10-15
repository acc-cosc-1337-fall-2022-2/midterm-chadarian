#include "question1.h"
#include <iostream>

bool test_config()
{
    return true;
}

double get_sales_commission(double sales)
{

    if(sales >= 0)
    {
        return sales * .05;
    }
    else if(sales >= 500)
    {
        return sales * 0.06;
    }
    else if(sales >= 1000)
    {
        return sales * 0.07;
    }
    else if (sales >= 1500)
    {
        return sales * 0.08;
    }
    else
    {
        return sales * 0;
    }

} 