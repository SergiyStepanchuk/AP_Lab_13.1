//////////////////////////////////////////////////////////////////////////////
// sum.cpp
// ���� ��������� �������
#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h" // ��������� ������ ���������� ������
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
	n = 1;
	a = pow(x, 3.) / 6.;
	s = x + a;
	do {
		n++;
		dod(); // ������ ��������� ���������� �������
		s += a;
	} while (fabs(a) > e);
	s = M_PI_2 - s;
}