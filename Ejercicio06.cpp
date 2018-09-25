/* 6. Utiliza las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, y calcular cual de todos tiene el mejor promedio, e imprimir sus datos */

#include<iostream>
#include<conio.h>

using namespace std;

struct promedio{
	float nota1, nota2, nota3;
};

struct alumno{
	char nombre[20], sexo[20];
	int edad;
	struct promedio prom;
}alumnos[100];

int main(){
	int cant_alum, pos=0;
	float prom_alum, mayor=0;
	
	cout<<"Digite la cantidad de Alumnos: "; cin>>cant_alum;
	
	//Ingreso Datos de los N alumnos
	cout<<"\n\tDatos de Alumnos"<<endl;
	for(int i=0; i<cant_alum; i++){
		cout<<"Alumno "<<i+1<<endl;
		fflush(stdin);
		cout<<"Digite su Nombre: "; cin.getline(alumnos[i].nombre, 20, '\n');
		cout<<"Digite su Sexo: "; cin.getline(alumnos[i].sexo, 20, '\n');
		cout<<"Digite su Edad: "; cin>>alumnos[i].edad;
		cout<<"\n";
	}
	
	//Ingreso de Notas de N alumnos
	for(int i=0; i<cant_alum; i++){
		cout<<"Ingrese Notas del Alumno "<<alumnos[i].nombre<<endl;
		fflush(stdin);
		cout<<"Nota 1: "; cin>>alumnos[i].prom.nota1;
		cout<<"Nota 2: "; cin>>alumnos[i].prom.nota2;
		cout<<"Nota 3: "; cin>>alumnos[i].prom.nota3;
		cout<<"\n";
		
		prom_alum = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;
		
		if(prom_alum > mayor){
			mayor = prom_alum;
			pos = i;
		}
	}
	
	//Imprimir Alumno con Mejor calificacion
	cout<<"\n\tAlumno con Mejor Calificacion"<<endl;
	cout.precision(3);
	cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
	cout<<"Sexo: "<<alumnos[pos].sexo<<endl;
	cout<<"Edad: "<<alumnos[pos].edad<<endl;
	cout<<"Calificacion Promedio: "<<mayor<<endl;
	
	getch();
	return 0;
}
