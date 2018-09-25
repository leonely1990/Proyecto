/* Ejercicio 4: Escriba un programa en c++ que devuelva la parte fraccionaria de cualquier numero introducido por el usuario.
por ejemplo, si se introduce el numero 256.879, deberia desplegarse el numero 0.879. */

#include<iostream>
#include<conio.h>

using namespace std;

void fraccionaria(float x);
void pedir();

float num;

int main(){
	pedir();
	fraccionaria(num);
	
	getch();
	return 0;
}

void pedir(){
	cout<<"Digite numero a sacar fracciones: "; cin>>num;
}

void fraccionaria(float x){
	int n = num;
	float resul = x;
	resul -= n;
	cout<<"La parte fraccionaria de "<<num<<" es: "<<resul<<endl; 
}
