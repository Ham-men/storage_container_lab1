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

