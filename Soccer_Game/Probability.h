#pragma once
#include <cstdlib>
#include <ctime>
class Probability
{
public:
	Probability();
	~Probability();

	int get_num(); //1~100���� ���� ����
	int probability(int percent); //percent�� �ش��ϸ� 1 �ƴϸ� 0
};

