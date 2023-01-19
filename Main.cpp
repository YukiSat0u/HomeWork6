#include "TV.h"

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "");

	IElec* warehouse[5];

	warehouse[0] = new Smartphone(6.5, "металл");
	warehouse[1] = new Laptop(15.6, 6);
	warehouse[2] = new CoffeeMaker(600, "капельная");
	warehouse[3] = new Washer(1950, 1400);
	warehouse[4] = new TV(43, 90);

	bool open = true;
	while (open)
	{
		cout << "Выберете устройство: 1 - телефон, 2 - ноутбук, 3 - кофемашина, 4 - стиральная машина, 5 - телевизор, 0 - выход" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			warehouse[0]->Show();
			break;

		case 2:
			warehouse[1]->Show();
			break;

		case 3:
			warehouse[2]->Show();
			break;

		case 4:
			warehouse[3]->Show();
			break;

		case 5:
			warehouse[4]->Show();
			break;

		case 0:
			open = false;
			break;

		default:
			cout << "Неверная команда" << endl;
			break;
		}
	}

	delete warehouse[0];
	delete warehouse[1];
	delete warehouse[2];
	delete warehouse[3];
	delete warehouse[4];

	return 0;
}