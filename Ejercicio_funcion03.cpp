/* Ejercicio 3: Escriba una funcion nombrada funpot() que eleve un numero entero que se le transmita a una potencia en numero entero positivo y despliegue
el resultado. El numero entero positivo debera ser el segundo valor transmitido a la funcion */

#include<iostream>
#include<conio.h>

using namespace std;

void pedirdatos();
void funpot(int x, int y);

int numero, exponente;

int main(){
	pedirdatos();
	funpot(numero,exponente);
	
	getch();
	return 0;
}

void pedirdatos(){
	cout<<"Digite un numero: "; cin>>numero;
	cout<<"Digite el exponente de elevacion: "; cin>>exponente;
}

void funpot(int x, int y){
	long resultado=1;
	for(int i=1; i<=y; i++){
		resultado *= x;
	}
	cout<<"El resultado es: "<<resultado<<endl;
}
