/* Ejercicio 9: escriba una funcion nombrada tiempo() que tenga un parametro en numero entero llamado total seg y tres parametros de referencia
enteros nombrados horas, min y seg. la funcion es convertir el numero de segundos transmitidos en un numero equivalente de horas, minutos y
segundo. */

#include<iostream>
#include<conio.h>

using namespace std;

void tiempo(int, int&, int&, int&);

int main(){
	int totalseg, x=0, y=0, z=0;
	
	cout<<"Digite la cantidad de segundos: "; cin>>totalseg;
	
	tiempo(totalseg,x,y,z);
	
	cout<<totalseg<<" segundos son: "<<x<<" Horas "<<y<<" Minutos "<<z<<" Segundos"<<endl;
	
	getch();
	return 0;
}

void tiempo(int totalseg, int& horas, int& min, int& seg){
	if(totalseg >= 3600){
		horas = totalseg/3600;
		totalseg %= 3600;
	}
	if(totalseg >= 60){
		min = totalseg/60;
		totalseg %= 60;
	}
	seg = totalseg;
}
