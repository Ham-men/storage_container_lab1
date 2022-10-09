#pragma once
#include "Fabric.h"
#include <iostream>
class Queue {
public:
	Queue();
	void insert(Fabric data);
	Fabric remove();
	//Queue(Fabric data);
	void printQueue();
	Queue* copy();
	int Queue_Size();
	static Queue* merge(Queue* first, Queue* second);
private:
	struct item {
		Fabric value;
		item* point_Next;
	};
	item* tail = nullptr;
	int size = 0;
};
