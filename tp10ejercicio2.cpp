#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarNumeroAleatorio(int minimo, int maximo) {
    return minimo + rand() % (maximo - minimo + 1);
}

int main(){
	int a,b;
	
	cout<<"Ingrese el minimo para el rango de numeros: ";
	cin>>a;
	
	cout<<"Ingrese el maximo para el rango de numeros: ";
	cin>>b;
	
	srand(static_cast<unsigned int>(time(0)));
	
	int numeroAleatorio = generarNumeroAleatorio(a, b);
	
	cout<<"Numero aleatorio generado: "<<numeroAleatorio;
	
	return 0;
}
