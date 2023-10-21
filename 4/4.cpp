#include <iostream>
using namespace std;

int main()
{
    int x;
    int n;
    int y;
    int k = 0;
    cin >> x >> n >> y;

    int f = x + k;
    int t = n + k;
    double j = f / t;
    cout << f << t << k << endl;
    if (j > y)
        k += 1;
    else if (j <= y)
        cout << k;
    cout << f << t << k << endl;
}
