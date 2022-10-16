#include "Fabric.h"

Fabric::Fabric()
{
	car1;
	furniture1;
	worker1;
	//	car1.car_add("null", "null", "null");
	//	furniture1.furniture_add("null", 0, 0, 0, "null", "null", 0);
	//	worker1.worker_add("null", "null", 0, "null", 0);
}

void Fabric::Fab_car_add(string brand2, string model2, string gos_nomber2)
{
	car1.car_add(brand2, model2, gos_nomber2);

}

void Fabric::Fab_furniture_add(string type2, int h, int w, int l, string color2, string material2, int price2)
{
	furniture1.furniture_add(type2, h, w, l, color2, material2, price2);
}

void Fabric::Fab_worker_add(string fio2, string job2, int zp2, string adress2, int m_nomber2)
{
	worker1.worker_add(fio2, job2, zp2, adress2, m_nomber2);

}




