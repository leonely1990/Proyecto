/* Escriba una funcion nombrada cambio() que tenga un parametro en numero entero y seis parametros de referencia en numero entero nombrados cien,
cincuenta, veinte, diez, cinco y uno, respectivamente. La funcion tiene que considerar el valor entero transmitido como una cantidad en dolares
y convertir el valor en el numero menor de billetes equivalentes */

#include<iostream>
#include<conio.h>

using namespace std;

void cambio(int, int&, int&, int&, int&, int&, int&);

int main(){
	int num, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;
	
	cout<<"Digite la cantidad en Dolares: "; cin>>num;
	
	cambio(num,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout<<cien<<" Billetes de $100"<<endl;
	cout<<cincuenta<<" Billetes de $50"<<endl;
	cout<<veinte<<" Billetes de $20"<<endl;
	cout<<diez<<" Billetes de $10"<<endl;
	cout<<cinco<<" Billetes de $5"<<endl;
	cout<<uno<<" Billetes de $1"<<endl;
	
	getch();
	return 0;
}

void cambio(int num, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
	if(num >= 100){
		cien = num/100;
		num %= 100;
	}
	if(num >= 50){
		cincuenta = num/50;
		num %= 50;
	}
	if(num >= 20){
		veinte = num/20;
		num %= 20;
	}
	if(num >= 10){
		diez = num/10;
		num %= 10;
	}
	if(num >= 5){
		cinco = num/5;
		num %= 5;
	}
	if(num >= 1){
		uno = num/1;
	}
}
