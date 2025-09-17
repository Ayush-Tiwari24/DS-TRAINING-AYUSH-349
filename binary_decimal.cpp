#include <iostream>

using namespace std;

int main()
{
    int n;
    int stack[100];
    int decimalStack[100];
    int top = -1;
    int decTop = -1;

    cout << "enter the value of n: ";
    cin >> n;
    int rem, mul = 1;
    int decimal = 0;
    int temp = n;
    int digits = 0;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    for (int i = 0; i < digits; i++)
    {
        rem = n % 10;
        n /= 10;
        decimal = rem * mul + decimal;
        mul *= 2;

        
        stack[++top] = rem;

    
        decimalStack[++decTop] = decimal;
    }

    cout << "Decimal: " << decimal << endl;

    

    cout << "Stack contents (decimal after each iteration): ";
    for (int i = 0; i <= decTop; i++)
    {
        cout << decimalStack[i] << " ";
    }
    cout << endl;

    return 0;
}