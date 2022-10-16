#pragma once
#include "lib_all.h"
class furniture
{
private:
	string type;
	int razmer[3];
	string color;
	string material;
	int price;

public:
	furniture();
	furniture(string type2,
		int h, int w, int l,
		string color2,
		string material2,
		int price2);
	void furniture_add(string type2, int h, int w, int l, string color2, string material2, int price2);
	string furniture_info();
};

