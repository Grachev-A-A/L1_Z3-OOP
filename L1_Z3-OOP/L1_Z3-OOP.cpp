//
//  main.cpp
//  L1_Z1
//
//  Created by Александр Грачев (ИКБО-10-18) on 15/02/2019.
//  Copyright © 2019 Александр Грачев. All rights reserved.
//  ТЕМА 3. ОПЕРАЦИИ НАД ЗНАЧЕНИЯМИ ПРОСТЫХ ТИПОВ
//  ДАННЫХ
//

#include "pch.h"
#include "locale.h"
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	//Задание 1. Операции над целыми.
	int a, b;
	cout << "Введите 2 целых\n";
	cin >> a >> b;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "a+b=" << a + b << endl << "a-b=" << a - b << "\na/b=" << a / b << "\na%b=" << a % b << "\na*b=" << a * b << endl;
	cout << "Введите целое а\n";
	cin >> a;
	cout << "a/2=" << a / 2 << "\na/2.0=" << a / 2.0 << endl;

	//Задание 2. Операции над вещественными.
	double c, d;
	cout << "\nВведите 2 вещественных числа\n";
	cin >> c >> d;
	cout << "c = " << c << ", d = " << d << endl;
	cout << "c+d=" << c + d << endl << "c-d=" << c - d << "\nc/d=" << c / d << "\nc*d=" << c * d << endl;

	//Задание 3. Беззнаковые типы.
	unsigned char ua = 255, ub = 10;
	cout << "\nua << ub = " << (ua << ub) << "\nua >> ub = " << (ua >> ub) << "\nua & ub = " <<
		(ua&ub) << "\nua | ub = " << (ua | ub) << "\nua ^ ub = " << (ua^ub) << "\n!ua = " << (!ua) <<
		"\n~ua = " << (~ua) << endl;

	//Задание 4. Символы
	char ch = 'A';
	cout << "\nch = " << ch << "\nКод ch = " << (int)ch << "\nch + 1 = " << (ch + 1) 
		<< "\nСимвол ch+1 = " << ((char)(ch+1)) << endl;


	system("PAUSE");
	return 0;
}
