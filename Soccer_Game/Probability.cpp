#include "Probability.h"
#include <windows.h>
#include <time.h>


Probability::Probability()
{
}


Probability::~Probability()
{
}

int Probability::get_num()
{
	srand(GetTickCount());
	return rand() % 100 + 1;
}

int Probability::probability(int percent)
{
	if (get_num() <= percent) { return 1; }
	else { return 0; }
}
