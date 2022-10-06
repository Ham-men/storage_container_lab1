#include "worker.h"

worker::worker()
{
	fio = 'none';
	job = 'none';
	zp = 0;
	adress = 'none';
	m_nomber = 0;
}

worker::worker(char fio2, char job2, int zp2, char adress2, int m_nomber2)
{
	fio = fio2;
	job = job2;
	zp = zp2;
	adress = adress2;
	m_nomber = m_nomber2;
}
