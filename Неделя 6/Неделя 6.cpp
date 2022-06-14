// Неделя 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	
		//Задача 1
	/*int a, summ = 0;
	cout << "Введите число от 0 до 500" << endl;
	cin >> a;
	while (a <= 500) {
		summ += a;
		a++;
	}
	cout << "Сумма чисел равна " << summ;*/

	// Задача 2

	/*int x, y, i = 1;
	float rezul = 1;
	cout << "Введите число Х" << endl;
	cin >> x;
	cout << "Введите число Y" << endl;
	cin >> y;
	if (y != 0) {
		while (i <= abs(y)) {
			rezul = rezul * x;
			i++;
		}
	}
	cout << "Результа равен  " << rezul;
	
	*/

	
			// Задача 3

	/*int i;
	float rezul = 0;
	for (i = 1; i <= 1000; i++) {
		rezul += i;
	}
	cout << "" << rezul / 1000;
	
	*/


	// Задача 4

	/*int a, rezul = 0;
	cout << "Введите целое число от 1 до 20" << endl;
	cin >> a;
	if (a >= 1 && a <= 20) {
		for (a; a <= 20; a++) {
			rezul += a;
		}
		cout << "Результат произведения равен  " << rezul;
	}
	else
	{
		cout << "Введено не верное число";
	}*/

	int a, i;
	cout << "Введите номер варианта от 1 до 10" << endl;
	cin >> a;
	if (a >= 1 && a <= 10) {
		for (i = 1; i <= 10; i++) {
			cout << a << " * " << i << " = " << a * i << endl;
		}
	}
	else
	{
		cout << "Введен не верное число варианта";
	}

}

