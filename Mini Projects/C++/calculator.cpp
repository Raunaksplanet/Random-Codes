#include <iostream>
using namespace std;

double add(double result, double value)
{
    return result + value;
}

double subtract(double result, double value)
{
    return result - value;
}

double multiply(double result, double value)
{
    return result * value;
}

double divide(double result, double value)
{
    if (value != 0.0)
    {
        return result / value;
    }
    else
    {
        cerr << "Error: Division by zero." << endl;
        return result;
    }
}

int main()
{
    char operation;
    double result, value;

    cout << "Enter the first value: ";
    cin >> result;

    do
    {
        cout << "Enter an operator (+, -, *, /) or 'q' to quit: ";
        cin >> operation;

        if (operation == 'q')
        {
            break;
        }

        cout << "Enter the next value: ";
        cin >> value;

        switch (operation)
        {
        case '+':
            result = add(result, value);
            break;
        case '-':
            result = subtract(result, value);
            break;
        case '*':
            result = multiply(result, value);
            break;
        case '/':
            result = divide(result, value);
            break;
        default:
            cerr << "Error: Invalid operator." << endl;
            break;
        }

        cout << "Result so far: " << result << endl;
    } while (true);

    cout << "Final result: " << result << endl;
}
