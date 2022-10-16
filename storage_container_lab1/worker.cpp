#include "worker.h"

worker::worker()
{
	fio = "none";
	job = "none";
	zp = 0;
	adress = "none";
	m_nomber = 0;
}

worker::worker(string fio2, string job2, int zp2, string adress2, int m_nomber2)
{
	fio = fio2;
	job = job2;
	zp = zp2;
	adress = adress2;
	m_nomber = m_nomber2;
}

void worker::worker_add(string fio2, string job2, int zp2, string adress2, int m_nomber2)
{
	fio = fio2;
	job = job2;
	zp = zp2;
	adress = adress2;
	m_nomber = m_nomber2;
}

string worker::worker_info()
{
	if (fio == "none")
		return "";
	else
		return "\nworker_info\n	fio = " + fio + "\n	job = " + job + "\n	zp = " + to_string(zp) + "\n	adress = " + adress + "\n	m_nomber = " + to_string(m_nomber);
}
