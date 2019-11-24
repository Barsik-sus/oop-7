#include <iostream>
#include "pers.h"
#include "admin.h"
#include "worker.h"
#include "engineer.h"
using namespace std;

int main()
{
	//создаём 4 объекта
	engineer First(5, 6);
	First.set_name("Sam");

	admin Second("Boss");
	Second.set_name("Bob");

	engineer Third(8, 2);
	Third.set_name("Jo");

	worker Fourth("Some specialty", 3);
	Fourth.set_name("Bony");
	
	//изменяем некоторые значения
	Third.set_quality(9);
	First.set_quality(8);

	//массив объектов
	pers* arrPers[4] = { &First, &Second, &Third, &Fourth };
	
	//вывод
	for (int i = 0; i < 4; i++)
	{
		arrPers[i]->print_name();
		arrPers[i]->print_info();
		cout << endl;
	}
	return 0;
}