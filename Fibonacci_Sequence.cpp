// cpp program of Fibonacci_Sequence 
#include <iostream>
using namespace std;

// create a function
int fib(int n)
{
    // check the condition
    if (n <= 1)
    {
        return n;
    }

    // otherwise
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}

// Driver code
int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;

    // call the function
    cout << "Fibonacci sequence of " << n << " is " << fib(n);

    return 0;
}