/* Ejercicio 1: Escriba una funcion llamada mult() que acepte dos numeros en punto flotante como parametros,
multiplique estos dos numeros y despliegue el resultado. */

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipos de funcion
void pedirdatos();
void mult(float x, float y);
//Variables globales
float num1, num2;

int main(){
	pedirdatos();
	mult(num1, num2);
	
	getch();
	return 0;
}

void pedirdatos(){
	cout<<"Digite 2 Numeros: ";
	cin>>num1>>num2;
}

void mult(float x, float y){
	float multiplicacion = x * y;
	
	cout<<"La Multiplicacion es: "<<multiplicacion<<endl;
}
