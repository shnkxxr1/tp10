#include <iostream>
using namespace std;

int dolar(int a){
	int conversion;
	conversion = a*955;
	cout<<"La conversion de pesos ARG a dolares es: "<<conversion;
}
int euros(int a){
	int conversion;
	conversion = a*1059;
	cout<<"La conversion de pesos ARG a euros es: "<<conversion;
}
int real(int a){
	int conversion;
	conversion = a*18050;
	cout<<"La conversion de pesos ARG a reales es: "<<conversion;
}


int main(){
    int eleccion;
    int valor;
    
    cout<<"Buenas, ingrese la moneda a la que quiere convertir de PESOS ARGENTINOS a esa moneda: "<<endl;
    cout<<"OPCION 1: Dolar"<<endl;
    cout<<"OPCION 2: Euro"<<endl;
    cout<<"OPCION 3: Real"<<endl;
    cin>>eleccion;
    
    cout<<"Ingrese la cantidad de la moneda que eligio que quiere convertir: ";
    cin>>valor;
    
    switch(eleccion){
    	case 1:
    		dolar(valor);
    		break;
    	case 2:
    		euros(valor);
    		break;
    	case 3:
    		real(valor);
    		break;
    	default:
    		cout<<"Opcion incorrecta.";
	}
	
	return 0;
}
