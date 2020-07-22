// Fabonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int fib(int n)
{
    int t0 = 0, t1 = 1, s=0, i;

    if (n <= 1) return n;

    for (i = 2;i <= n;i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

int fibrecurr(int n)
{
    if (n <= 1) return n;
    return fibrecurr(n-2)+ fibrecurr(n-1);
}

int F[10];

int fibrecurrmemo(int n)
{
    if (n <= 1) 
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = fibrecurrmemo(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = fibrecurrmemo(n - 1);
        
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}


int main()
{
    for (int i = 0;i < 10;i++)
        F[i] = -1;

    //std::cout << fib(10);
    //std::cout << fibrecurr(10);
    std::cout << fibrecurrmemo(5);
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
