#pragma once
#include <iostream>
#include "Fabric.h"
class Queue {
public:
	Queue();
	void insert(Fabric data);

	Fabric remove();
	//Queue(Fabric data);
	void printQueue(string type);
	Queue* copy();
	int Queue_Size();
	static Queue* merge(Queue* first, Queue* second);
	string worker_info();
	string furniture_info();
	string car_info();

private:
	struct item {
		Fabric value;
		item* point_Next;
	};
	int size = 0;
	item* tail = nullptr;

};
