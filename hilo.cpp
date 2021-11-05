#include <stdio.h>
#include <cstdlib>
#include <math.h>
#include <iostream>

using namespace std;

int main() {

	int ivalor = 20;
	int icontador = 0;
	int i =0;

	cout << "------------------------- Inicio Programa hilo ----------------------" << endl;
	for(int i = 1; i <= ivalor; i++){
		icontador += i;
		cout << "Ciclo for i = " << icontador << endl;
	}

	cout << "------------------------- Inicio del llamado ----------------------" << endl;
	cout << "====> llamado a otro programa " << endl;
	system("./bin/cal_geometria");
	cout << "------------------------- Fin del llamado -------------------------" << endl;
	cout << "------------------------- Fin Programa hilo ----------------------" << endl;
	return 0;
}
