#pragma once
#include "lib_all.h"
class worker
{
private:
	string fio;
	string job;
	int zp;
	string adress;
	int m_nomber;

public:
	worker();
	worker(string fio2,
		string job2,
		int zp2,
		string adress2,
		int m_nomber2);
	void worker_add(string fio2, string job2, int zp2, string adress2, int m_nomber2);
	string worker_info();
};

