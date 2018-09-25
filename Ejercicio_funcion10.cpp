/* Ejercicio 10: Escriba una funcion nombrada calc_años() que tenga un parametro entero que represente el numero total de dias desde
la fecha 1/1/2000 y parametros de referencia nombrados año, mes y dia. La funcion es calcular el año, mes y dia actual para el numero
dado de dias que se le transmitan. para este problema suponga que cada año tiene 165 dias y cada mes tiene 30 dias. */

#include<iostream>
#include<conio.h>

using namespace std;

void calc_ano(int, int&, int&, int&);

int main(){
	int totaldias, d=1, m=1, a=2000;
	
	cout<<"Digite el Total de dias transcurridos: "; cin>>totaldias;
	
	calc_ano(totaldias,a,m,d);
	
	cout<<totaldias<<" Dias son: "<<a<<" Anos / "<<m<<" Meses / "<<d<<" Dias"<<endl;
	
	getch();
	return 0;
}

void calc_ano(int totaldias, int& ano, int& mes, int& dia){
	if(totaldias >= 365){
		ano = (totaldias/365) + 2000;
		totaldias %= 365;
	}
	if(totaldias >= 30){
		mes = (totaldias/30);
		totaldias %= 30;
	}
	if(totaldias < 30){
		dia = totaldias;
	}
}
