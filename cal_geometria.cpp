#include <stdio.h>
#include <math.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int vi_opcion  = 1;
	float vf_area  = 0;
	bool vb_opcion = false;


	int vi_base=0;
        int vi_altura = 0;
	int vi_radio = 0;
	double vd_raiz = 0;

	cout << " + -----------------------------------------------------------------+\n";
        cout << " | Programa para calcular el area de una figura                     |\n";
        cout << " | Realizado por Oscar Nicolas Berrocal Hernandez                   |\n";
        cout << " | Hecho el 07/10/2021 Universidad Cooperativa de Colombia          |\n";
        cout << " | Hecho el 14/10/2021. renombrar y agregar código de fragmento     |\n";
	cout << " | Hecho el 21/10/2021. realiza la raiz cuadrada del area           |\n";
        cout << " + -----------------------------------------------------------------+\n";
        cout << "\n";

	cout << "Seleccionar una opcion geometrica para calcular el area\n";
	cout << "Circulo   [1] por defecto\n";
	cout << "Triangulo [2] \n";
	cout << "Cuadrado  [3] \n";
	cout << "[1] :";

	cout << "Opcion por defecto = 1";
	//cin >> vi_opcion;
	vi_opcion = 1;

	cout << "Usted ingreso: " << vi_opcion << endl;

	if (vi_opcion < 1 ){
		vi_opcion = 1;
		vb_opcion = true;
	}else if (vi_opcion > 3 ){
		vi_opcion = 1;
		vb_opcion = true;
	}

	if (vb_opcion) {
		cout << "ingreso una opcion fuera de rango, se asigna por defecto 1\n";
	}

	switch(vi_opcion) {
	  case 1:
    	    // Circulo
	    cout << "Ingrese el Radio del circulo : ";
	    //cin >> vi_radio;
	    vi_radio = 3;

	    cout << "\n";
	    vf_area = (vi_radio * vi_radio) * 3.14151692;
	    break;
	  case 2:
	    // Triangulo
	    cout << "Ingrese la altura : ";
	    cin >> vi_altura;
	    cout << "\n";

	    cout << "Ingrese la base : ";
            cin >> vi_base;
            cout << "\n";

	    vf_area = (vi_base * vi_altura) / 2;
	    break;
	  default:
	    // Cuadrado
	    cout << "Ingrese longitud de la base : ";
            cin >> vi_base;
            cout << "\n";

	    vf_area = vi_base * vi_base;
            break;
	}

	cout << "La area es => " << vf_area << endl;

	//Archivo funcion
	//vf_area calcular la raiz cuadrada en una variable y imprimir

	vd_raiz = sqrt(vf_area);
	cout << "La raiz cuadrada de " << vf_area << " es " << vd_raiz;
	return 0;
}
