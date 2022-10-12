#include "queue3.h"
using namespace std;
int Queue_3::math_operation()
{
	float result;
	//int sr_sum = 0,s=0;

	//int size = Queue_Size();
	//int* arr = new int[size];
	//int i = 0;
	//for (i = 0; i < size; i++) {
	//	int save = remove();
	//	arr[i] = save;
	//	sr_sum += arr[i];
	//	this->insert(save);
	//}


	//result = (sr_sum * 1.0) / size;
	//cout << "\nсреднее арифметическое = " << result<<"; числа = ";
	//
	//for (i = 0; i < size; i++) {
	//	//cout << "\n-" << arr[i];
	//	if (arr[i] > result)
	//		if (arr[i] % 2 == 0)
	//		{
	//			cout << arr[i] << " ";
	//			s++;
	//		}
	//			
	//}
	//cout << "\nкол-во " << s;

	//delete[] arr;
	return 0;
}
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