#include<iostream>

using namespace std;

int main()
{
	//PROBLEM 6: WRITE A C++ PROGRAM TO CALCULATE FACTORIAL N. (STUDENTS TEST)N!= N ×(N-1) ×(N-2) ×...×3 ×2 ×1

	int n, factorial = 1;
	cout << "Enter a positive integer: ";
	cin >> n;

	int i = n;
	do
	{
		factorial *= i;
		i--;
	} while (i >= 1);
	
	cout << "Factorial of " << n << " = " << factorial;
}