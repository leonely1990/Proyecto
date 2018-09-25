/* Ejercicio 13: Realiza una funcion que tome como parametros un vector de numeros y su tamaño y cambie
el signo de los elementos del vector */

#include<iostream>
#include<conio.h>

using namespace std;

void conversion(int vec[], int);
void pedirdatos();

int vector1[100];
int tam;

int main(){
	
	pedirdatos();
	
	cout<<"El Vector contiene los siguientes numeros alamacenados"<<endl;
	for(int i=0; i<tam; i++){
		cout<<vector1[i]<<" ";
	}
	
	conversion(vector1,tam);
	
	getch();
	return 0;
}

void pedirdatos(){
	cout<<"Digite la cantidad de elementos del vector: "; cin>>tam;
	
	for(int i=0; i<tam; i++){
		cout<<i+1<<". Digite numero real: "; cin>>vector1[i];
	}
}

void conversion(int vec[], int tam){
	for(int i=0; i<tam; i++){
		vec[i] *= -1;
	}
	
	cout<<"\nEl Vector tras la conversion quedo de la siguiente manera"<<endl;
	for(int i=0; i<tam; i++){
		cout<<vec[i]<<" ";
	}
}
