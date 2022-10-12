#pragma once
#include "queue.h"
#include "Fabric.h"
class Queue_3 :
	private Queue
{
public:
	int math_operation();
	void insert(Fabric data);
	Fabric remove();
	void printQueue();
	Queue* copy();
	static Queue* merge(Queue* first, Queue* second);
};
