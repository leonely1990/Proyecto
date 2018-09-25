#include<iostream>
#include<conio.h>

using namespace std;

void pedirdatos();
int calcsuma(int prueba[], int);

int vector[100], tamano;


int main(){
	pedirdatos();
	
	cout<<"\nLa suma de los elementos del vector es: "<<calcsuma(vector,tamano)<<endl;
	
	getch();
	return 0;
}

void pedirdatos(){
	cout<<"Digite el numero de elementos del vector: "; cin>>tamano;
	
	for(int i=0; i<tamano; i++){
		cout<<i+1<<". Digite un numero: "; cin>>vector[i];
	}
}

int calcsuma(int prueba[], int tamano){
	int suma=0;
	
	for(int i=0; i<tamano; i++){
		suma += prueba[i];
	}
	return suma;
}
