#pragma once
#include "Figure.h"
#include"Circle.h"
#include "Rectangel.h"
#include "Regualr_Triangle.h"
#include "Square.h"
#include "Triangle.h"
#include <iostream>
#include <Windows.h>
using namespace std;

class Application
{
public:
	Application();
	~Application();

	void run();
private:
	Figure* ptr;
};

