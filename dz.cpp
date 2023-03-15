#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Задание 1\n\n";
	char ASCII;
	int sym;
	cout << "Введите Букву или символ, цифру, знаки препинания и т.д\n";
	cin >> ASCII;
	sym = (int)ASCII;
	if (sym >= 33 && sym <= 43 || sym == 45 || sym == 47 || sym >= 60 && sym <= 64 || sym >= 91 && sym <= 96 || sym >= 123 && sym <= 126) {
		cout << "Вы ввели символ\n";
	}
	if (sym == 44 || sym == 45 || sym == 46 || sym == 58 || sym == 59) {
		cout << "Вы ввели знак препинания\n"; // ,.;:
	}
	if (sym >= 48 && sym <= 57) {
		cout << "Вы ввели цифру\n";
	}
	if (sym >= 65 && sym <= 90 || sym >= 97 && sym <= 122) {
		cout << "Вы ввели Букву\n";
	}

	cout << "\nЗадание 2\n\n";
	int Operator; int abonent; int cost = 0;
	int time = 60;
	cout << "Какой у вас оператор ?\n[1] - Билайн\n[2] - Мегафон\n[3] - МТС\n";
	cin >> Operator;
	cout << "Какой оператор у абонента ?\n[1] - Билайн\n[2] - Мегафон\n[3] - МТС\n";
	cin >> abonent;
	cout << "Сколько минут длился разговор ?\n";
	cin >> time;
	if (Operator == abonent) {
		cout << "У вас одинаковый Оператор, звонок бесплатный\n";
	}
	if (Operator == 1 && abonent == 2 || Operator == 2 && abonent == 1) {
		cost = time * 2;
		cout << "Звонок обошёлся в " << cost << "руб";
	}
	if (Operator == 2 && abonent == 3 || Operator == 3 && abonent == 2) {
		cost = time * 3;
		cout << "Звонок обошёлся в " << cost << "руб";
	}
	if (Operator == 1 && abonent == 3 || Operator == 3 && abonent == 1) {
		cost = time * 6;
		cout << "Звонок обошёлся в " << cost << "руб";
	}


	cout << "\nЗадание 3\n\n";
	int strok;
	int choose;
	int dohod = 0;
	int opozdaniy;
	int zp = 0;
	cout << "Выберите вариант:\n[1] - Посчитать, сколько строк нужно написать.\n[2] - Посчитать, сколько раз Вася может опоздать.\n";
	cout << "[3] - Посчитать, сколько денег заплатят Васе.\n";
	cin >> choose;
	switch (choose) {
	case 1:
		cout << "Введите желаемый доход Васи:\n";
		cin >> dohod;
		cout << "Введите сколько раз опоздал Вася:\n";
		cin >> opozdaniy;
		opozdaniy = opozdaniy / 3;
		dohod = dohod + (opozdaniy * 20);
		if ((dohod % 50) >= 1) {
			strok = dohod / 50;
			strok++;
		}
		else {
			strok = dohod / 50;
		}
		strok = strok * 100;
		cout << "Васе нужно написать " << strok << " Строчек.\n";
		break;
	case 2:
		cout << "Введите количество строчек Васи:\n";
		cin >> strok;
		cout << "Введите желаемый доход Васи:\n";
		cin >> dohod;
		strok = strok / 100;
		zp = strok * 50;
		dohod = zp - dohod; 
		opozdaniy = ((dohod / 20) * 3) + 2;
		cout << "Вася может опоздать ещё " << opozdaniy << " раз.\n";
		break;
	case 3:
		cout << "Введите количество строчек Васи:\n";
		cin >> strok; // 1000
		cout << "Введите сколько раз опоздал Вася:\n"; // 8
		cin >> opozdaniy;
		dohod = (strok / 100) * 50;
		opozdaniy = (opozdaniy / 3) * 20;
		dohod = dohod - opozdaniy;
		if (dohod <= 0) {
			cout << "Васе не заплатят\n";
		}
		else {
			cout << "Васе заплатят " << dohod << " руб";
		}
	}
}
