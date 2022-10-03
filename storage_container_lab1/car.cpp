#include "car.h"

car::car()
{
	brand = 'none';
	model = 'none';
	gos_nomber = 'none';
}

car::car(char brand2, char model2, char gos_nomber2)
{
	brand = brand2;
	model = model2;
	gos_nomber = gos_nomber2;
}

char car::get_brand()
{
	return brand;
}
