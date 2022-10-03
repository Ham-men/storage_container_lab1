#include "furniture.h"

furniture::furniture()
{
	type = 'none';
	razmer[0] = 0;
	razmer[1] = 0;
	razmer[2] = 0;
	color = 'none';
	material = 'none';
	price = 0;

}

furniture::furniture(char type2, int h, int w, int d, char color2, char material2, int price2)
{
	type = type2;
	razmer[0] = h;
	razmer[1] = w;
	razmer[2] = d;
	color = color2;
	material = material2;
	price = price2;

}




