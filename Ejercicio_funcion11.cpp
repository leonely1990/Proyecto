/* Ejercicio 11: Realice una funcion que tome como parametros un vector de numeros enteros y devuelva la suma de sus elementos */

#include<iostream>
#include<conio.h>

using namespace std;

void vector(int prueba[], int, int&);
void muestra(int);

int main(){
	const int TAM = 5;
	int vec[TAM] = {1,2,3,4,5} , suma=0;
	
	vector(vec,TAM,suma);
	muestra(suma);
	
	getch();
	return 0;
}

void vector(int prueba[], int tamano, int& suma){
	for(int i=0; i<tamano; i++){
		suma += prueba[i];
	}
}

void muestra(int suma){
	cout<<suma<<endl;
}
