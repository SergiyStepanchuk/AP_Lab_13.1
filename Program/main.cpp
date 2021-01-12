//////////////////////////////////////////////////////////////////////////////
// Lab_13_1.cpp
// головний файл проекту – функція main
#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout.setf(ios::left);
	cout << fixed;

	cout << "xp = "; cin >> x_p;
	cout << "xk = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> e;

	cout << "--------------------------------------------------" << endl; // 50
	cout << "| " << setw(10) << "x" << "| "
		<< setw(10) << "arccos(x)" << "| "
		<< setw(10) << "S" << "| "
		<< setw(10) << "n" << " |"
		<< endl;
	cout << "--------------------------------------------------" << endl; // 50
	x = x_p;
	while (x <= x_k)
	{
		sum();
		cout << "| " << setw(10) << setprecision(7) << x << "| "
			<< setw(10) << setprecision(7) << acos(x) << "| "
			<< setw(10) << setprecision(7) << s << "| "
			<< setw(10) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "--------------------------------------------------" << endl;
}