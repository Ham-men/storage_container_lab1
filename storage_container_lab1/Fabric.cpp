#include "Fabric.h"

Fabric::Fabric()
{
	//работник
	fio = 'null';
	job = 'null';
	zp = 0;
	adress = 'null';
	m_nomber = 0;
	//мебель
	type = 'null';
	razmer[0] = 0;
	razmer[1] = 0;
	razmer[2] = 0;

	color = 'null';
	material = 'null';
	price = 0;
	//машина
	brand = 'null';
	model = 'null';
	gos_nomber = 'null';
}

void Fabric::worker_add(string fio2, string job2, int zp2, string adress2, int m_nomber2)
{
	fio = fio2;
	job = job2;
	zp = zp2;
	adress = adress2;
	m_nomber = m_nomber2;
}

void Fabric::furniture_add(string type2, int h, int w, int l, string color2, string material2, int price2)
{
	type = type2;
	razmer[0] = h;
	razmer[1] = w;
	razmer[2] = l;
	color = color2;
	material = material2;
	price = price2;
}

void Fabric::car_add(string brand2, string model2, string gos_nomber2)
{
	brand = brand2;
	model = model2;
	gos_nomber = gos_nomber2;
}

string Fabric::worker_info()
{

	return "fio = " + fio + "\njob = " + job + "\nzp = " + to_string(zp) + "\nadress = " + adress + "\nm_nomber = " + to_string(m_nomber);
}

string Fabric::furniture_info()
{
	return "type = " + type + "\nvisota = " + to_string(razmer[0]) + "\nshirina = " + to_string(razmer[1]) + "\ndlina = " + to_string(razmer[2]) + "\ncolor = " + color + "\nmaterial = " + material;
}

string Fabric::car_info()
{
	return "brand = " + brand + "\nmodel = " + model + "\ngos_nomber = " + gos_nomber;
}

