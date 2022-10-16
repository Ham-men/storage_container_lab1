#include "furniture.h"

furniture::furniture()
{
	type = "none";
	razmer[0] = 0;
	razmer[1] = 0;
	razmer[2] = 0;
	color = "none";
	material = "none";
	price = 0;

}

furniture::furniture(string type2, int h, int w, int l, string color2, string material2, int price2)
{
	type = type2;
	razmer[0] = h;
	razmer[1] = w;
	razmer[2] = l;
	color = color2;
	material = material2;
	price = price2;

}

void furniture::furniture_add(string type2, int h, int w, int l, string color2, string material2, int price2)
{
	type = type2;
	razmer[0] = h;
	razmer[1] = w;
	razmer[2] = l;
	color = color2;
	material = material2;
	price = price2;
}

string furniture::furniture_info()
{
	if (type == "none")
		return "";
	else
		return "\nfurniture_info\n	type = " + type + "\n	visota = " + to_string(razmer[0]) + "\n	shirina = " + to_string(razmer[1]) + "\n	glubina = " + to_string(razmer[2]) + "\n	color = " + color + "\n	material = " + material + "\n	price = " + to_string(price);
}




