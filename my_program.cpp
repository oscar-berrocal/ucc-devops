#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {

	int ivalor = 0;
	int icontador = 0;

	cout << "Ingrese un valor para calcular una suma: ";
	cout << "hola mundo ";
	cin >> ivalor;
	cout << "Usted ingreso: " << ivalor << endl;
	for(int i = 1; i <= ivalor; i++){
		icontador += i;
	}

	cout << "El resultado es: " << icontador << endl;

	return 0;
}
