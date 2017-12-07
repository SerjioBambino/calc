// calc.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "Enter two numbers!" << endl;
	cout << "A = ";
	cin >> a;
	cout << endl << "B = ";
	cin >> b;
	cout << "Amount A and B = " << a+b << endl;
	cout << "Difference A and B = " << a-b << endl;
	system("pause");
    return 0;
}


