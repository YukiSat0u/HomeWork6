#include "TV.h"

TV::TV(double diagonal, int power) : Portable(diagonal), Appliances(power)
{
}

void TV::Show()
{
	cout << "Диагональ телевизора: " << _diagonal << " дюйма(ов)" << endl
		<< "Мощность телевизора: " << _power << " Вт" << endl;
}