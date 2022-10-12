#pragma once
#include <iostream>
#include "Fabric.h"
class Queue {
public:
	Queue();
	void insert(Fabric data);
	Fabric remove();
	Queue(Fabric data);
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
