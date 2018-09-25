/* Ejercicio 2: Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado.
la funcion debera ser capaz de elevar al cuadrado numeros flotantes. */

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipos de funcion
void al_cuadrado(float x); //Funcion para calcular el cuadrado de los valores transmitidos
void pedirdatos(); //Funcion para Pedir datos al usuario
//Declaracion de variables globales
float num;

int main(){
	pedirdatos();
	al_cuadrado(num);
	
	getch();
	return 0;
}

void pedirdatos(){
	cout<<"Digite el numero que quiere elevar al cuadrado: "; cin>>num;
}

void al_cuadrado(float x){
	float cuadrado = num * num;
	
	cout<<"\nEl numero "<<num<<" elevado al cuadrado es: "<<cuadrado<<endl;
}
