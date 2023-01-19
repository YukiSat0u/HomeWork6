#include "Appliances.h"

Appliances::Appliances(int power) : _power(power)
{
}

void Appliances::Show()
{
	cout << "������������ �������� �������: " << _power << " ��" << endl;
}

CoffeeMaker::CoffeeMaker(int power, string type) : Appliances(power), _type(type)
{
}

void CoffeeMaker::Show()
{
	cout << "��� ���������: " << _type << endl
		<< "������������ ��������: " << _power << " ��" << endl;
}

Washer::Washer(int power, int spin) : Appliances(power), _spin(spin)
{
}

void Washer::Show()
{
	cout << "�����: " << _spin << " ��������" << endl
		<< "������������ ��������: " << _power << " ��" << endl;
}