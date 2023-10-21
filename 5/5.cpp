#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    cin >> x;
    cin >> y;
    if (x > 0 and y > 0)
        cout << "I";
    if (x < 0 and y > 0)
        cout << "II";
    if (x < 0 and y < 0)
        cout << "III";
    if (x > 0 and y < 0)
        cout << ("IV");
}