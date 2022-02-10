#include <iostream>

using namespace std; 

int main (int argc, char** argv) {
	// Dtaos de entrada 
	double subtotal = 0;
	double total = 0; 
	double impuesto = 0.15;
	int descuento = 0;
	double calculoDescuento = 0;
	double calculoImpuesto = 0;
	char estaExenta;
	
	
	cout << "Ingrese el subtotal de la factura "<<endl;
	cin >> subtotal;
	
	cout << "ingrese el descuento (0, 10, 15, 20) "<<endl;
	cin >> descuento; 
	
	cout<< "Factura Exenta? s/n "; 
	cin>> estaExenta;
	
	if (estaExenta == 's' || estaExenta == 'S') {
		calculoImpuesto = 0;
		calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
		
	}
	
	// Proceso 
	calculoDescuento = (subtotal * descuento) / 100;
	calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
	total = subtotal - calculoDescuento + calculoImpuesto;
	
	// salida
	
	cout << endl;
	cout << "Total a pagar es" <<endl<< total;
	
	return 0;
}
