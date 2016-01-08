#include <iostream>
using namespace std;

void iterativo (int numero) {

	



void fibonacciIterativo (double numero) {

	double primero = 0 , segundo = 1 , tercero = 0;

	cout << primero << endl;
	cout << segundo << endl;

	for (int i = 1 ; i <= numero-2 ; i++)  {

		tercero = segundo + primero;
		cout << tercero << endl;
		primero = segundo;
		segundo = tercero;
	}
}
int main() {
	int numero = 0;
	do {
	cout << "Cuantos numeros de la sucesión quieres: ";
	cin >> numero;

	iterativo (numero);
	recursivo (numero);
	} while (numero > 1);

	return 0;
}
