#pragma once
#include "queue.h"
class Queue_3 :
	private Queue
{
public:
	int math_operation();
	void insert(int data);
	int remove();
	void printQueue();
	Queue* copy();
	static Queue* merge(Queue* first, Queue* second);
};
