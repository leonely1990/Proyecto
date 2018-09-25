/* Ejercicio 14: Realice una funcion que tome como parametros un vector de enteros y su tamaño e
imprima un vector con los elementos impares del vector recibido */

#include<iostream>
#include<conio.h>

using namespace std;

void vector(int vect[], int);
void impares(int vect[], int);
void tomardatos();

int vector1[100], vector2[100], tam, j=0;

int main(){
	tomardatos();
	impares(vector1,tam);
	vector(vector2,j);
	
	getch();
	return 0;
}

void tomardatos(){
	cout<<"Digite la cantidad de elementos que tendra el Vector: "; cin>>tam;
	
	for(int i=0; i<tam; i++){
		cout<<i+1<<". Digite numero: "; cin>>vector1[i];
	}
}

void impares(int vect[], int tam){
	for(int i=0; i<tam; i++){
		if(vect[i]%2 != 0){
			vector2[j] = vect[i];
			j++;
		}
	}
}

void vector(int vect[], int j){
	cout<<"Los impares almacenados en el vector son: ";
	for(int i=0; i<j; i++){
		cout<<vector2[i]<<" ";
	}
}
