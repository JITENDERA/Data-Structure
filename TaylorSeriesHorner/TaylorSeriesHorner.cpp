// TaylorSeriesHorner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double e(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e(x, n - 1);
}

double e2(int x, int n)
{
    double s=1;
    int i;
    double num = 1;
    double den = 1;

    for (i = 1;i <= n;i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }
    return s;
}


int main()
{
    //std::cout << e(1, 10);
    std::cout << e2(1, 10);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
