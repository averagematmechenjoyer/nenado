#include <iostream>
using namespace std;

int main()
/* {
    int year_a;
    int year_b;
    cin >> year_a >> year_b;

    int goodHund = ((year_a / 100) / 4);
    int badHund = year_a / 100 - goodHund;

    int toDelete = year_a / 4 - badHund;

    int solve = (year_b / 4 - badHund) - toDelete;
    cout << goodHund << endl;




    int year = ((year_b - year_a) / 100) % 4;
    cout << year << endl;

}*/

{
    int year_a;
    int year_b;
    cin >> year_a;
    cin >> year_b;

    int goodHund_a = (year_a / 100) / 4;
    int badHund_a = year_a / 100 - goodHund_a;
    int allLeap_a = year_a / 4 - badHund_a;
    
    int goodHund_b = (year_b / 100) / 4;
    int badHund_b = (year_b / 100) - goodHund_b;

    int solve = year_b / 4 - allLeap_a - badHund_b;
    cout << solve;
}