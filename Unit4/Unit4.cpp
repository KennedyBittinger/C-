#include <iostream>

using namespace std;

int main()
{
    // Write your main here
    double num;

    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    cout << "The number you entered is " << num << ", and this is a ";

    if (num == 0)
    {
        cout << "zero." << endl;
    }
    else if (num > 0)
    {
        cout << "positive number." << endl;
    }
    else
    {
        cout << "negative number." << endl;
    }

    return 0;
}
