/* Ejercicio 12: Realice una funcion que tome como parametros un vector y su tamaño y diga si el vector
esta ordenado crecientemente. sugerencia: compruebe que para todas las posiciones del vector, salvo para
la 0, el elemento del vector es mayor o igual que el elemento que le precede en el vector. */

#include<iostream>
#include<conio.h>

using namespace std;

void pedirdatos();
void creciente(int vect[], int);

int vector[100], tam;
char band = 'V';

int main(){
	pedirdatos();
	creciente(vector,tam);
	
	if(band == 'V'){
		cout<<"El Vector esta Ordenado Crecientemente"<<endl;
	}
	else if(band == 'F'){
		cout<<"El Vector esta Desordenado"<<endl;
	}
	
	getch();
	return 0;
}

void pedirdatos(){
	cout<<"Digite la cantidad de elementos del Vector: "; cin>>tam;
	
	for(int i=0; i<tam; i++){
		cout<<i+1<<". Digite un numero: "; cin>>vector[i];
	}
}

void creciente(int vect[], int tam){
	for(int i=0; i<tam; i++){
		if(vect[i+1] >= vect[i]){
			band = 'V';
		}
		else{
			band = 'F';
		}
		break;
	}
}
