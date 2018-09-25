/* Ejercicio 7: Intercambiar el valor de 2 variables utilizando paso de parametros por referencia */

#include<iostream>
#include<conio.h>

using namespace std;

void variable(int&, int&);

int main(){
	int x=10, y=15;
	
	cout<<"El valor de X es: "<<x<<endl;
	cout<<"El valor de Y es: "<<y<<endl;
	
	variable(x,y);
	
	cout<<"El nuevo valor de X es: "<<x<<endl;
	cout<<"El nuevo valor de Y es: "<<y<<endl;
	
	getch();
	return 0;
}

void variable(int& x, int& y){
	int aux;
	aux = x;
	x = y;
	y = aux;
}
