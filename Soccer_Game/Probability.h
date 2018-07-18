#pragma once
#include <cstdlib>
#include <ctime>
class Probability
{
public:
	Probability();
	~Probability();

	int get_num(); //1~100까지 숫자 추출
	int probability(int percent); //percent에 해당하면 1 아니면 0
};

