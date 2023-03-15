#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");

	//system("color B5");

        cout << "Задание 1\n\n";
	char ASCII;
	int sym;
	cout << "Введите Букву или символ, цифру, знаки препинания и т.д\n";
	cin >> ASCII;
	sym = (int)ASCII;
	if (sym >= 33 && sym <= 43|| sym == 45 || sym == 47 || sym >= 60 && sym <= 64 || sym >= 91 && sym <= 96 || sym >= 123 && sym <= 126) {
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
	cout << sym;
	
	cout << "\nЗадание 2\n\n";
	int Operator; int abonent; int cost = 0;
	int time = 60;
	cout << "Какой у вас оператор ?\n[1] - Билайн\n[2] - Мегафон\n[3] - МТС\n";
	cin >> Operator;
	cout << "Какой оператор у абонента ?\n[1] - Билайн\n[2] - Мегафон\n[3] - МТС\n";
	cin >> abonent;
	cout << "Сколько длился разговор ?\n";
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
}
