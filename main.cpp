#include <iostream>
using namespace std;

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++) // i-- is changed to i++
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
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}
