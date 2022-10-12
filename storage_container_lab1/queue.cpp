#include "queue.h"
using namespace std;
Queue::Queue() {
	size = 0;
	tail = nullptr;
}
void Queue::insert(Fabric data) {
	tail = new item{ data, tail };
	size++;
}
int Queue::Queue_Size() {
	return size;
}
Fabric Queue::remove() {
	item* iterator = tail;
	item* prevElement = iterator;
	if (tail == nullptr) {
		throw (404);
	}
	while (iterator->point_Next != nullptr) {
		prevElement = iterator;
		iterator = iterator->point_Next;
	}
	prevElement->point_Next = nullptr;
	Fabric save = iterator->value;
	delete iterator;
	size--;
	if (size == 0)
		tail = nullptr;
	return save;
}
void Queue::printQueue()
{
	int i = size;
	Fabric save;
	while (i != 0) {
		save = this->remove();
		cout << save.car_info() << " ";
		cout << save.furniture_info() << " ";
		cout << save.worker_info() << " ";
		this->insert(save);
		i--;
	}
	cout << endl;
}
Queue* Queue::copy()
{
	Queue* queue = new Queue();
	int i = this->size;

	Fabric save;
	while (i != 0) {
		save = this->remove();
		queue->insert(save);
		this->insert(save);
		i--;
	}
	return queue;
}
Queue* Queue::merge(Queue* first, Queue* second)
{
	Queue* FirstQueue = first;
	Queue* SecondQueue = second;
	int i = SecondQueue->size;
	while (i > 0) {
		Fabric save = SecondQueue->remove();
		FirstQueue->insert(save);
		i--;
	}
	FirstQueue->printQueue();
	delete SecondQueue;
	return FirstQueue;
}
