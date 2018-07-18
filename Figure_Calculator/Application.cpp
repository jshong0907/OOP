#include "Application.h"



Application::Application()
{
}


Application::~Application()
{
	delete ptr;
}

void Application::run()
{
	cout << "��������" << "\n__________________________\n1. ���簢��\n2. ���簢��\n3. �ﰢ��\n4. ���ﰢ��\n5. ��\n__________________________\n�Է�::";
	int choice;
	cin >> choice;


	if (choice == 1)
	{
		float bottom_side, side;
		cout << "�غ��� ���� �Է�::";
		cin >> bottom_side;
		cout << "������ ���� �Է�::";
		cin >> side;
		ptr = new Rectangel(bottom_side, side);
		cout << "\n���̴� " << ptr->area() << "�̰� �ѷ��� " << ptr->circumference() << "�Դϴ�.";
	}
	else if (choice == 2)
	{
		float side;
		cout << "�� ���� ���� �Է�::";
		cin >> side;
		ptr = new Square(side);
		cout << "\n���̴� " << ptr->area() << "�̰� �ѷ��� " << ptr->circumference() << "�Դϴ�.";
	}
	else if (choice == 3)
	{
		float side1, side2, side3;
		cout << "ù��° ���� ���� �Է�::";
		cin >> side1;
		cout << "�ι�° ���� ���� �Է�::";
		cin >> side2;
		cout << "����° ���� ���� �Է�::";
		cin >> side3;
		ptr = new Triangle(side1, side2, side3);
		cout << "\n���̴� " << ptr->area() << "�̰� �ѷ��� " << ptr->circumference() << "�Դϴ�.";
	}
	else if (choice == 4)
	{
		float side;
		cout << "�� ���� ���� �Է�::";
		cin >> side;
		ptr = new Regualr_Triangle(side);
		cout << "\n���̴� " << ptr->area() << "�̰� �ѷ��� " << ptr->circumference() << "�Դϴ�.";
	}
	else if (choice == 5)
	{
		float radius;
		cout << "������ �Է�::";
		cin >> radius;
		ptr = new Circle(radius);
		cout << "\n���̴� " << ptr->area() << "�̰� �ѷ��� " << ptr->circumference() << "�Դϴ�.";
	}
}
