// Paso de parametros tipo Matriz

//Elevar al cuadrado todos los elementos de una matriz

#include<iostream>
#include<conio.h>

using namespace std;

void mostrarMatriz(int m[][3],int,int);
void calcularCuadrado(int m[][3],int,int);
void mostrarMatrizElevada(int m[][3],int,int);

int main(){
	const int NFILAS = 2;
	const int NCOL = 3;
	int m[NFILAS][NCOL] = {{1,2,3},{4,5,6}};
	
	mostrarMatriz(m,NFILAS,NCOL);
	calcularCuadrado(m,NFILAS,NCOL);
	mostrarMatrizElevada(m,NFILAS,NCOL);
	
	getch();
	return 0;
}

void mostrarMatriz(int m[][3],int filas,int col){
	cout<<"Mostrando Matriz Original\n"<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<col; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void calcularCuadrado(int m[][3],int filas,int col){
	for(int i=0; i<filas; i++){
		for(int j=0; j<col; j++){
			m[i][j] *= m[i][j];
		}
	}
}

void mostrarMatrizElevada(int m[][3],int filas,int col){
	cout<<"\n\nMostrando matriz elevada al cuadrado\n";
	for(int i=0; i<filas; i++){
		for(int j=0; j<col; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}
