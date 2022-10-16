#include "car.h"

car::car()
{
	brand = "none";
	model = "none";
	gos_nomber = "none";
}

car::car(string brand2, string model2, string gos_nomber2)
{
	brand = brand2;
	model = model2;
	gos_nomber = gos_nomber2;
}



void car::car_add(string brand2, string model2, string gos_nomber2)
{
	brand = brand2;
	model = model2;
	gos_nomber = gos_nomber2;
}

string car::car_info()
{
	if (brand == "none")
		return "";
	else
		return "\ncar_info\n	brand = " + brand + "\n	model = " + model + "\n	gos_nomber = " + gos_nomber;
}
