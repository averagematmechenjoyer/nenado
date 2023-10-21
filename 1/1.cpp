#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int num1 = x / 10;
    int num2 = x % 10;
    if (num1 > num2)
        cout << num1;
    else
        cout << num2;
}

