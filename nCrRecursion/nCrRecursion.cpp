// nCrRecursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int Ifact(int n)
{
    int f = 1;
    int i;
    for (i = 1;i <= n;i++)
    {
        f = f * i;
    }
    return f;
}

int nCr(int n, int r)
{
    int num, den;
    
    num = Ifact(n);
    den = Ifact(r) * Ifact(n - r);

    return num / den;
}

int nCrRecur(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    return nCrRecur(n - 1, r - 1) + nCrRecur(n - 1, r);
}


int main()
{
    //std::cout << nCr(4, 2);
    std::cout << nCrRecur(4, 2);
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
