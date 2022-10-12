
#include "queue3.h"
#include <math.h>
#include "Fabric.h"


//27.09 создал классы объектов для ввода в них значения.
//создать класс Base который будет хранить все 3 объекта.
//создал fabric. сделать сохранение объектов класса в массив
//поменять char на string
int main() {

	Fabric fabric1_input;
	Fabric fabric_mass[5];

	fabric1_input.worker_add("asd", "asd", 23, "adrs", 8999);
	//fabric1.car_add('asd', 'asd', 'asd');
	fabric_mass[0] = fabric1_input;
	cout << fabric_mass[0].worker_info();
	//--------------------
	Queue_3 Myqueue; // create queue
	Queue* copyMyqueue1 = Myqueue.copy();
	Queue* copyMyqueue;
	Queue* copyMyqueue_1;
	//int value='s';
	setlocale(LC_ALL, "Russian");
	system("cls");
	int n = 1;
	//переменные для ввода значений в класс Fabric
	int a = 0;
	int b = 0;
	int c = 0;
	string text1 = NULL;
	string text2 = NULL;
	string text3 = NULL;


	cout << "1:ввод 7: выход" << endl;
	while (n != 0) {
		cout << "\nномер операции = ";
		cin >> n;
		switch (n) {
		case 1:
			// add value in queue
			cout << "\nввод Fabric";
			//cin >> value;
			Myqueue.insert(fabric1_input);
			break;
		case 2:
			// delete value in queue
			cout << "\nпервое число удалено. Теперь очередь выглядит так:";
			Myqueue.remove();
			Myqueue.printQueue();
			break;
		case 3:
			// print queue
			cout << "\nвывод очереди = ";
			Myqueue.printQueue();
			cout << "\nвывод копии очереди = ";
			copyMyqueue1->printQueue();
			break;
		case 4:
			// count
			cout << "\n№4 результат = ";
			Myqueue.math_operation();
			break;
		case 5:
			cout << "\nкопия создана";
			copyMyqueue1 = Myqueue.copy();
			break;
		case 6:
			cout << "\nслияние = ";
			copyMyqueue = Myqueue.copy();
			copyMyqueue_1 = Myqueue.copy();
			Myqueue.merge(copyMyqueue, copyMyqueue_1);
			break;
		case 7:
			//close program
			cout << "\nвыход ";
			return 0;
			break;
		default: break;
		}
	}

	return 0;
}