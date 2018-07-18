#include "Application.h"

int main()
{
	Application application;
	application.run();
	system("pause");
	application.~Application();
}