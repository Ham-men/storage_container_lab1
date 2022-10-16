#include "queue.h"

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
void Queue::printQueue(string type)
{


	int i = size;
	Fabric save;
	while (i != 0) {
		save = this->remove();
		if (type == "car")
			cout << save.car1.car_info();
		if (type == "furniture")
			cout << save.furniture1.furniture_info();
		if (type == "worker")
			cout << save.worker1.worker_info();
		if (type == "all")
		{
			cout << save.car1.car_info();
			cout << save.furniture1.furniture_info();
			cout << save.worker1.worker_info();
		}

		this->insert(save);
		i--;
	}
	cout << endl;
}
Queue* Queue::copy()
{
	Queue* queue = new Queue();
	/*int i = this->size;

	Fabric save;
	while (i != 0) {
		save = this->remove();
		queue->insert(save);

		this->insert(save);

		i--;
	}*/
	return queue;
}
Queue* Queue::merge(Queue* first, Queue* second)
{
	Queue* FirstQueue = first;
	//Queue* SecondQueue = second;
	//int i = SecondQueue->size;
	//while (i > 0) {
	//	Fabric save = SecondQueue->remove();
	//	FirstQueue->insert(save);
	//	
	//	i--;
	//}
	////FirstQueue->printQueue();
	//delete SecondQueue;
	return FirstQueue;
}

string Queue::worker_info()
{

	int i = size;
	Fabric save;
	string result = "";
	while (i != 0) {
		save = this->remove();
		result += save.worker1.worker_info();
		this->insert(save);
		i--;
	}

	return result;
}

string Queue::furniture_info()
{
	int i = size;
	Fabric save;
	string result = "";
	while (i != 0) {
		save = this->remove();
		result += save.furniture1.furniture_info();
		this->insert(save);
		i--;
	}

	return result;
}

string Queue::car_info()
{
	int i = size;
	Fabric save;
	string result = "";
	while (i != 0) {
		save = this->remove();
		result += save.car1.car_info();
		this->insert(save);
		i--;
	}

	return result;
}
