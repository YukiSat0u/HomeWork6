#include "TV.h"

TV::TV(double diagonal, int power) : Portable(diagonal), Appliances(power)
{
}

void TV::Show()
{
	cout << "��������� ����������: " << _diagonal << " �����(��)" << endl
		<< "�������� ����������: " << _power << " ��" << endl;
}