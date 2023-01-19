#include "TV.h"

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "");

	IElec* warehouse[5];

	warehouse[0] = new Smartphone(6.5, "������");
	warehouse[1] = new Laptop(15.6, 6);
	warehouse[2] = new CoffeeMaker(600, "���������");
	warehouse[3] = new Washer(1950, 1400);
	warehouse[4] = new TV(43, 90);

	bool open = true;
	while (open)
	{
		cout << "�������� ����������: 1 - �������, 2 - �������, 3 - ����������, 4 - ���������� ������, 5 - ���������, 0 - �����" << endl;
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
			cout << "�������� �������" << endl;
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