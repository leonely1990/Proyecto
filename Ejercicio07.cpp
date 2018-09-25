/* 7. Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. la estructura debe tener tres campos: horas, minutos, segundos.
Escriba un programa que dada N estapas calcule el tiempo total empleado en correr todas las etapas. */

#include<iostream>
#include<conio.h>

using namespace std;

struct tiempo{
	int hora, minuto, segundo;
}ciclos[100];

int main(){
	int cant_ciclos, horas=0, minutos=0, segundos=0;
	
	cout<<"Digite la cantidad de Ciclos completados: "; cin>>cant_ciclos;
	
	for(int i=0; i<cant_ciclos; i++){
		cout<<"\n\tDigite Tiempo Recorrido en el cliclo "<<i+1<<endl;
		cout<<"Horas: "; cin>>ciclos[i].hora;
		cout<<"Minutos: "; cin>>ciclos[i].minuto;
		cout<<"Segundos: "; cin>>ciclos[i].segundo;
	}
	
	for(int i=0; i<cant_ciclos; i++){
		horas += ciclos[i].hora;
		minutos += ciclos[i].minuto;
		segundos += ciclos[i].segundo;
		
		if(minutos >= 60){
			minutos -= 60;
			horas ++;
		}
		if(segundos >= 60){
			segundos -= 60;
			minutos ++;
		}
	}
	
	cout<<"\nEl tiempo total de las "<<cant_ciclos<<" Etapas es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
	
	getch();
	return 0;
}
