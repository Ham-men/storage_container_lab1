#include <math.h>
#include "Fabric.h"
#include "queue.h"
#include <fstream>


bool is_digit(const char* S) {		//проверка на число
	const char* temp = "0123456789-+";
	unsigned point_count = 0;

	for (int i = 0; i < strlen(S); i++) {
		if ((i > 0) && (S[i] == '+' || S[i] == '-')) return false;
		if (S[i] == '.') {
			point_count++;
			if (point_count > 1) return false;
		}
		if (!strchr(temp, S[i])) return false;
	}
	return true;
}
int return_int()
{
	const int N = 256;
	char S[N];

	cin >> S;
	while (!is_digit(S)) {	//сделать проверку на ввод числа
		cout << "введите число  = ";
		cin >> S;
	}
	cout << "ok\n";
	return atof(S);
}

int main() {
	ofstream Out_txt;          // поток для записи
	ifstream in_txt;			//поток для чтения


	Fabric* fabric1_input = new Fabric();

	//Queue_3 Keeper; // create queue. хранит все объекты класса фабрика
	/*Queue* copyKeeper1 = Keeper.copy();
	Queue* copyKeeper;
	Queue* copyKeeper_1;*/
	Queue* Keeper2 = new Queue();
	//int value='s';
	setlocale(LC_ALL, "Russian");
	system("cls");
	int n = 1;
	//переменные для ввода значений в класс Fabric
	int a = NULL;
	int b = NULL;
	int c = NULL;
	int d = NULL;
	int nomer_stroki_read = 0;
	string text1 = "null";
	string text2 = "null";
	string text3 = "null";
	string text4_read = "null";
	int size_car = 0;
	int size_worker = 0;
	int size_furniture = 0;

	cout << "1:добавить работника 2: добавить машину 3: добавить мебель 4: вывести всё 5:вывести работников 6: вывести машины 7: вывести мебель 8: выход" << endl;
	cout << "10: удалить первый массив из очереди 11: сохранить в result.txt 12: чтение из result";

	while (n != 8) {
		a = NULL;
		b = NULL;
		c = NULL;
		d = NULL;
		cout << "\nномер операции = ";
		n = return_int();
		switch (n) {
		case 1:
			// add value in Keeper and fabric create
			cout << "\nдобавить работника";
			cout << "\nстрока фио = ";
			cin >> text1;
			cout << "\nстрока работа = ";
			cin >> text2;
			cout << "\nчисло зарплата = ";
			a = return_int();
			cout << "\nстрока адресс = ";
			cin >> text3;
			cout << "\nчисло мобыльный номер = ";
			b = return_int();
			fabric1_input->Fab_worker_add(text1, text2, a, text3, b);
			Keeper2->insert(*fabric1_input);
			fabric1_input = new Fabric();
			size_worker++;
			//delete& fabric1_input;
			break;
		case 2:
			// add value in Keeper and fabric create
			cout << "\nдобавить машину";
			cout << "\nстрока марка = ";
			cin >> text1;
			cout << "\nстрока модель = ";
			cin >> text2;
			cout << "\nтекст гос номер = ";
			cin >> text3;

			fabric1_input->Fab_car_add(text1, text2, text3);
			//Keeper2.size = size_car;
			Keeper2->insert(*fabric1_input);
			fabric1_input = new Fabric();
			size_car++;
			//delete& fabric1_input;
			break;
		case 3:
			// add value in Keeper and fabric create
			cout << "\nдобавить мебель";
			cout << "\nстрока тип = ";
			cin >> text1;
			cout << "\nчисло габариты (h,w,l) = ";
			cin >> a;
			cin >> b;
			cin >> c;
			cout << "\nстрока цвет = ";
			cin >> text2;
			cout << "\nстрока материал = ";
			cin >> text3;
			cout << "\nчисло цена = ";
			cin >> d;

			fabric1_input->Fab_furniture_add(text1, a, b, c, text2, text3, d);
			//Keeper2.size = size_furniture;
			Keeper2->insert(*fabric1_input);
			fabric1_input = new Fabric();
			size_furniture++;
			//delete& fabric1_input;

			break;
		case 4:
			// print queue
			cout << "\nвывод всех\n";
			Keeper2->printQueue("all");

			break;
		case 5:
			// print queue
			cout << "\nвывод работник\n";
			Keeper2->printQueue("worker");

			break;
		case 6:
			// print queue
			cout << "\nвывод машин\n";
			Keeper2->printQueue("car");

			break;
		case 7:
			// print queue
			cout << "\nвывод мебели\n";
			Keeper2->printQueue("furniture");

			break;
		case 10:
			// delete value in queue
			cout << "\nпервый массив удален. Теперь очередь выглядит так:";
			Keeper2->remove();
			Keeper2->printQueue("all");
			break;
		case 11://запись в result.txt
			if (Keeper2->worker_info() == "" && Keeper2->car_info() == "" && Keeper2->furniture_info() == "")
				cout << "\nМассив пуст. Введите данные\n";
			else
			{
				Out_txt.open("result.txt"); // окрываем файл для записи
				if (Out_txt.is_open())	//записывает сначала всех рабочих, потом всю мебель, потом все машины
				{
					Out_txt << Keeper2->worker_info();
					Out_txt << Keeper2->furniture_info();
					Out_txt << Keeper2->car_info();
					cout << "\nзаписал\n";
					Out_txt.close();
				}

			}


			break;
		case 12:
			cout << "\nчтения файла result.txt\n";
			in_txt.open("result.txt"); // окрываем файл для чтения
			if (in_txt.is_open())
			{
				while (getline(in_txt, text4_read))
				{
					nomer_stroki_read = 0;	//для номера строки
					cout << text4_read << endl;	//вывод всего текста
					if (text4_read == "worker_info")	//данные работника. отформатированные. проделать для машины и мебели
					{
						while (nomer_stroki_read != 5)
						{
							getline(in_txt, text4_read);
							switch (nomer_stroki_read)
							{
							case 0:
								text1 = text4_read.substr(7, text4_read.size() - 1);
								break;
							case 1:
								text2 = text4_read.substr(7, text4_read.size() - 1);
								break;
							case 2:
								a = stoi(text4_read.substr(6, text4_read.size() - 1));
								break;
							case 3:
								text3 = text4_read.substr(10, text4_read.size() - 1);
								break;
							case 4:
								b = stoi(text4_read.substr(12, text4_read.size() - 1));
								break;
							}

							cout << text4_read << endl;	//вывод всего текста
							nomer_stroki_read++;
						}

						fabric1_input->Fab_worker_add(text1, text2, a, text3, b);
						Keeper2->insert(*fabric1_input);
						fabric1_input = new Fabric();
					}

					if (text4_read == "car_info")	//данные машины
					{

						while (nomer_stroki_read != 3)
						{
							getline(in_txt, text4_read);
							switch (nomer_stroki_read)
							{
							case 0:
								text1 = text4_read.substr(9, text4_read.size() - 1);
								break;
							case 1:
								text2 = text4_read.substr(9, text4_read.size() - 1);
								break;
							case 2:
								text3 = text4_read.substr(14, text4_read.size() - 1);
								break;

							}

							cout << text4_read << endl;	//вывод всего текста
							nomer_stroki_read++;
						}

						fabric1_input->Fab_car_add(text1, text2, text3);
						Keeper2->insert(*fabric1_input);
						fabric1_input = new Fabric();
					}

					if (text4_read == "furniture_info")	//данные мебели
					{
						while (nomer_stroki_read != 6)
						{
							getline(in_txt, text4_read);
							switch (nomer_stroki_read)
							{
							case 0:
								text1 = text4_read.substr(8, text4_read.size() - 1);
								break;
							case 1:
								a = stoi(text4_read.substr(10, text4_read.size() - 1));
								break;
							case 2:
								b = stoi(text4_read.substr(11, text4_read.size() - 1));
								break;
							case 3:
								c = stoi(text4_read.substr(11, text4_read.size() - 1));
								break;
							case 4:
								text2 = text4_read.substr(9, text4_read.size() - 1);
								break;
							case 5:
								text3 = text4_read.substr(12, text4_read.size() - 1);
								break;
							case 6:
								d = stoi(text4_read.substr(9, text4_read.size() - 1));
								break;


							}

							cout << text4_read << endl;	//вывод всего текста
							nomer_stroki_read++;
						}

						fabric1_input->Fab_furniture_add(text1, a, b, c, text2, text3, d);
						Keeper2->insert(*fabric1_input);
						fabric1_input = new Fabric();
					}




				}
			}
			else
				cout << "файл не найден";
			in_txt.close();
			break;
		case 8:
			//close program
			cout << "\nвыход ";

			return 0;
			break;
		default: break;
		}

	}

	return 0;
}