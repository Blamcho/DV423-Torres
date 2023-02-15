// guessmynumer.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Abraham Torres

#include <time.h>
#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int x; // valor
	int num; //numero introducir
	int contador = 0; // contador de intentos

	srand((unsigned)time(NULL)); // generador de numeros aliatorios
	x = rand() % (101);

	cout << "Adivina erl numero entre 0 y 100" << endl << endl;
	int a = 0; // variabler para el ciclo while almacenado en  la variable null

	while (a == 0)
	{
		cout << "introduce un numero:" << endl;
		cin >> num;
		contador++; // contador 
		if (num > x)
			cout << "estas lejos" << endl; // mesaaje para si esta lejos de adivinar
		else if (num < x)
			cout << " estas cerca" << endl; // mensaje para si esta cerca
		else
		{
			cout << endl << " Adivinaste!" << endl; // mesaje  de adivinbaste 
			cout << "el numero der intentos " << contador; // numeero de intentos
		}
	}
}


