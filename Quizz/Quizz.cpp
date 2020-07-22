// Quizz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Q1(int n)
{
	static int i = 1;

	if (n >= 5)return n;

	n = n + i;

	i++;

	return Q1(n);

}

void Q2(int n, int sum)

{

	int k = 0, j = 0;

	if (n == 0) return;

	k = n % 10;

	j = n / 10;

	sum = sum + k;

	Q2(j, sum);

	cout << k;

}

int Q3(int& x, int c)

{

	c = c - 1;

	if (c == 0) return 1;

	x = x + 1;

	return Q3(x, c) * x;

}

int Q4(int n)

{

	int x = 1, k;

	if (n == 1) return x;

	for (k = 1; k < n; ++k)

		x = x + Q4(k) * Q4(n - k);

	return x;

}

void Q5(int n)

{

	static int d = 1;

	cout << n;

	cout << d;

	d++;

	if (n > 1) Q5(n - 1);

	cout << d;

}

int main()
{

	//cout << Q1(1);

	/*int a = 2048, sum = 0;
	Q2(a, sum);
	cout << sum;*/

	/*int p = 5;
	cout << Q3(p, p);*/

	//cout << Q4(5);

	Q5(3);
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
