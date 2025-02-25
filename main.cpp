#include <iostream>
using namespace std;

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)  // Fix: Changed i-- to i++
    {
        result *= i;
    }
    return result;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}