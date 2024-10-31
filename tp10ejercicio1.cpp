#include <iostream>
using namespace std;

int mayor(int a, int b, int c){
	if(a>b){
		cout<<"El numero "<<a<<" es el mayor.";
	}
	else if(c>b){
	    cout<<"El numero "<<c<<" es el mayor.";
	}
	else{
		cout<<"El numero "<<b<<" es el mayor.";
	}
}

int main(){
	int a;
	int b;
	int c;
	
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>a;
	
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>b;
	
	cout<<"Ingrese el tercer numero: "<<endl;
	cin>>c;
	
	mayor(a, b, c);
}
