#include <iostream>
#include <math.h>
using namespace std;

int potencia(int a, int b){
	int resultado = pow(a, b);
	return resultado;
}


int main(){
	int numbase;
	int exponente;
	
	cout<<"Ingrese el numero base: ";
	cin>>numbase;
	
	cout<<"Ingrese el exponente: ";
	cin>>exponente;
	
	cout<<"El resultado es: "<<potencia(numbase, exponente);
	
	
}
