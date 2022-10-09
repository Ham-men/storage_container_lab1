#include "queue3.h"
#include "Fabric.h"
using namespace std;

void Queue_3::insert(Fabric data) {
	Queue::insert(data);
}
Fabric Queue_3::remove() {
	return Queue::remove();
}
void Queue_3::printQueue() {
	Queue::printQueue();
}
Queue* Queue_3::copy() {
	return Queue::copy();
}
Queue* Queue_3::merge(Queue* first, Queue* second) {
	return Queue::merge(first, second);
}

