// Lab4.5.cpp
// Михайлов Олександр
// «Попадання» у плоску фігуру
// Варіант 19
#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R;

	srand((unsigned)time(NULL));
	cout << "R = "; cin >> R;

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((y >= sqrt(R * R - x * x) && y <= 2 * R && y >= 0) || (y >= -x - 2 * R && y <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		int A = -2 * R;
		int B = 2 * R;
		x = A + rand() % (B - A + 1);
		y = A + rand() % (B - A + 1);

		if ((y >= sqrt(R * R - x * x) && y <= 2 * R && y >= 0) || (y >= -x - 2 * R && y <= 0))
			cout << setw(8) << setprecision(2) << x << "  " << setw(8) << setprecision(2) << y << "  " << "yes" << endl;
		else
			cout << setw(8) << setprecision(2) << x << "  " << setw(8) << setprecision(2) << y << "  " << "no" << endl;
	}

	cin.get();
	return 0;
}