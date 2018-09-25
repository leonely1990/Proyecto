/* 5. Hacer 2 estructuras una llamada promedio que tendra los siguientes campos: nota1, nota2, nota3; y otra llamada alumno que tendra los siguentes miembros:
nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio,
y por ultimo imprimir sus datos incluidos el promedio. */

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
}alum;

int main(){
	float promedio_alum;
	
	cout<<"Digite su nombre: "; cin.getline(alum.nombre, 20, '\n');
	cout<<"Digite su sexo: "; cin.getline(alum.sexo, 20, '\n');
	cout<<"Digite su edad: "; cin>>alum.edad;
	
	cout<<"\n\t Notas del Alumno"<<endl;
	cout<<"Nota1: "; cin>>alum.prom.nota1;
	cout<<"Nota2: "; cin>>alum.prom.nota2;
	cout<<"Nota3: "; cin>>alum.prom.nota3;
	
	promedio_alum = (alum.prom.nota1 + alum.prom.nota2 + alum.prom.nota3) / 3;
	
	cout<<"\n\tDatos del Alumno"<<endl;
	cout<<"Nombre: "<<alum.nombre<<endl;
	cout<<"Sexo: "<<alum.sexo<<endl;
	cout<<"Edad: "<<alum.edad<<endl;
	cout<<"Promedio: "<<promedio_alum<<endl;
	
	getch();
	return 0;
}
