#pragma once
#include <iostream>
#include <string> 
using namespace std;

class Fabric
{

private:
	//работник
	string fio;
	string job;
	int zp;
	string adress;
	int m_nomber;
	//мебель
	string type;
	int razmer[3];
	string color;
	string material;
	int price;
	//машина
	string brand;
	string model;
	string gos_nomber;

public:
	Fabric();
	void worker_add(string fio2, string job2, int zp2, string adress2, int m_nomber2);
	void furniture_add(string type2, int h, int w, int l, string color2, string material2, int price2);
	void car_add(string brand2, string model2, string gos_nomber2);
	string worker_info();
	string furniture_info();
	string car_info();


};

