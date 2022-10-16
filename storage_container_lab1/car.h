#pragma once
#include "lib_all.h"
class car
{
private:
	string brand;
	string model;
	string gos_nomber;


public:
	car();
	car(string brand2,
		string model2,
		string gos_nomber2);
	//string get_brand();
	void car_add(string brand2, string model2, string gos_nomber2);
	string car_info();
};

