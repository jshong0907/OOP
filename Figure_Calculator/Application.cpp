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
	cout << "도형선택" << "\n__________________________\n1. 직사각형\n2. 정사각형\n3. 삼각형\n4. 정삼각형\n5. 원\n__________________________\n입력::";
	int choice;
	cin >> choice;


	if (choice == 1)
	{
		float bottom_side, side;
		cout << "밑변의 길이 입력::";
		cin >> bottom_side;
		cout << "옆면의 길이 입력::";
		cin >> side;
		ptr = new Rectangel(bottom_side, side);
		cout << "\n넓이는 " << ptr->area() << "이고 둘레는 " << ptr->circumference() << "입니다.";
	}
	else if (choice == 2)
	{
		float side;
		cout << "한 변의 길이 입력::";
		cin >> side;
		ptr = new Square(side);
		cout << "\n넓이는 " << ptr->area() << "이고 둘레는 " << ptr->circumference() << "입니다.";
	}
	else if (choice == 3)
	{
		float side1, side2, side3;
		cout << "첫번째 변의 길이 입력::";
		cin >> side1;
		cout << "두번째 변의 길이 입력::";
		cin >> side2;
		cout << "세번째 변의 길이 입력::";
		cin >> side3;
		ptr = new Triangle(side1, side2, side3);
		cout << "\n넓이는 " << ptr->area() << "이고 둘레는 " << ptr->circumference() << "입니다.";
	}
	else if (choice == 4)
	{
		float side;
		cout << "한 변의 길이 입력::";
		cin >> side;
		ptr = new Regualr_Triangle(side);
		cout << "\n넓이는 " << ptr->area() << "이고 둘레는 " << ptr->circumference() << "입니다.";
	}
	else if (choice == 5)
	{
		float radius;
		cout << "반지름 입력::";
		cin >> radius;
		ptr = new Circle(radius);
		cout << "\n넓이는 " << ptr->area() << "이고 둘레는 " << ptr->circumference() << "입니다.";
	}
}
