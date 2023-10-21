#include <iostream>
using namespace std;

int main()
{
	int xDegrees; int yDegrees;
	cin >> xDegrees >> yDegrees;
	double xRad = (xDegrees * 3.1415 / 180);
	double yRad = (yDegrees * 3.1415 / 180);

	double ctg = 1.0 / tan(xRad);

	float firstStep = 1 - tan(xRad);

	if (firstStep < 0 and (ctg > 0 and ctg < 1))
		cout << "incorrect input data";
	else {
		float secondStep = pow(firstStep, ctg);
		float thirdStep = secondStep + cos(xRad - yRad);
		cout << thirdStep;
	}
}