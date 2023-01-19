#include "Appliances.h"

Appliances::Appliances(int power) : _power(power)
{
}

void Appliances::Show()
{
	cout << "Потребляемая мощность техники: " << _power << " Вт" << endl;
}

CoffeeMaker::CoffeeMaker(int power, string type) : Appliances(power), _type(type)
{
}

void CoffeeMaker::Show()
{
	cout << "Тип кофеварки: " << _type << endl
		<< "Потребляемая мощность: " << _power << " Вт" << endl;
}

Washer::Washer(int power, int spin) : Appliances(power), _spin(spin)
{
}

void Washer::Show()
{
	cout << "Отжим: " << _spin << " оборотов" << endl
		<< "Потребляемая мощность: " << _power << " Вт" << endl;
}