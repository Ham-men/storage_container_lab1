#pragma once
#include "car.h"
#include "furniture.h"
#include "worker.h"


class Fabric
{

private:



public:
	//работник
	worker worker1;
	//мебель
	furniture furniture1;
	//машина
	car car1;
	Fabric();
	void Fab_car_add(string brand2, string model2, string gos_nomber2);
	void Fab_furniture_add(string type2, int h, int w, int l, string color2, string material2, int price2);
	void Fab_worker_add(string fio2, string job2, int zp2, string adress2, int m_nomber2);

};

