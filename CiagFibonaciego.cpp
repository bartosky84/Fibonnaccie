// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "stdafx.h"
#include <process.h>
using namespace std;

float oceny[5]; float suma = 0, srednia;
int fib[100000]; int n;

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cout << endl << "Podaj "<< i+1 << " ocene: ";
		cin >> oceny[i];

		//mozemy zapisać forme skruconą:
		//suma mogła by wygladać nastepujaco:
		//suma+=oceny[i]; zostawie jednak poniższy zapis:

		suma = suma + oceny[i];
	}
	cout << endl << "Suma = " << suma << endl;

	cout << "Ile liczb Fibonacciego mam wyznaczyc: ";
	cin >> n;
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (int i = 2; i < n; i++)
	{
		cout << endl << "wyraz nr " << i + 1 << fib[i] << endl;

	}



	system("pause");
    return 0;
}

