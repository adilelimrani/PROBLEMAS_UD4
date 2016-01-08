#include <iostream>
using namespace std;

int FactorialRecursivo (int numero) {

	int factorial = 1;

	if (numero == 0) {
		factorial = 1;
	}
	else {
		factorial = numero * FactorialRecursivo (numero-1);
	}
	return factorial;
}

int FactorialIterativo (int numero) {

	int factorial = 1;

	for (int i = 1 ; i <= numero ; i++) {
		factorial*=i;
	}
	return factorial;
}

int main() {

	int numero = 0;


	cout << "Introducir numero: ";
	cin >> numero;

	cout << "recursivo: " << FactorialRecursivo(numero) << endl;
	cout << "iterativo: " << FactorialIterativo(numero) << endl;

	return 0;
}
