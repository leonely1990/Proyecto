/* Paso de parametros de tipo vector

Parametros de la funcion:
	void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo)
	
llamada a la funcion:
	nombreDeFuncion(nombreArreglo, tamañoArreglo)

*/

//cuadrado de los elementos

#include<iostream>
#include<conio.h>

using namespace std;

void vector(int vec[], int);
void muestra(int vec[], int);

int main(){
	const int TAM = 5;
	int vec[TAM] = {1,2,3,4,5};
	
	vector(vec,TAM);
	muestra(vec,TAM);
	
	getch();
	return 0;
}

void vector(int vec[], int tama){
	for(int i=0; i<tama; i++){
		vec[i] *= vec[i];
	}
}

void muestra(int vec[], int tama){
	for(int i=0; i<tama; i++){
		cout<<vec[i]<<" ";
	}
}
