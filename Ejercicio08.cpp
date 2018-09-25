/* 8. Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos: el nombre de la persona y un valor de tipo logico
que indica si la persona tiene algun tipo de discapacidad. Realice un programa que dado un vector de personas rellene dos nuevos vectores: uno que contenga las
personas que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad. */

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct persona{
	char nombre[20];
	bool disca;
}personas[30], per_dis[30], per_sin[30];

int main(){
	int d=0, s=0, cant;
	
	cout<<"Digite la Cantidad de personsas a Registrar: "; cin>>cant;
	
	for(int i=0; i<cant; i++){
		cout<<"Registro "<<i+1<<endl;
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(personas[i].nombre, 20, '\n');
		cout<<"Discapacitado (1/0)?: "; cin>>personas[i].disca;
		
		if(personas[i].disca == 1){
			strcpy(per_dis[d].nombre, personas[i].nombre);
			d++;
		}
		else{
			strcpy(per_sin[s].nombre, personas[i].nombre);
			s++;
		}
	}
	cout<<"\n\tPersonas con Discapacidad"<<endl;
	for(int i=0; i<cant; i++){
		cout<<per_dis[i].nombre<<endl;
	}
	
	cout<<"\n\tPersonas Sin Discapacidad"<<endl;
	for(int i=0; i<cant; i++){
		cout<<per_sin[i].nombre<<endl;
	}
}
