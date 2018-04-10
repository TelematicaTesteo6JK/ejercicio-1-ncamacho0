#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    cout << " Test data " << "Expected result " << "Actual result" << "pass/fail" << endl;
    if (0==pago_estacionamiento(-5))
        cout << "-5 " << "0 " << pago_estacionamiento(-5) << "fail" << endl;
    else
        cout << "-5 " << "0 " << pago_estacionamiento(-5) << "pass" << endl;


    if (0==pago_estacionamiento(5))
        cout << "5 " << "1 " << pago_estacionamiento(5) << "pass" << endl;
    else
        cout << "5 " << "1 " << pago_estacionamiento(5) << "false" << endl;










    // Agrega tus casos de prueba



    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
