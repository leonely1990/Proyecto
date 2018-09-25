/* Ejercicio 6: Escriba una plantilla de funcion llamada maximo() que devuelva el valor maximo de tres argumentos que se transmitan a la funcion
cuando sea llamada. suponga que los tres argumentos seran del mismo tipo de datos. */

#include<iostream>
#include<conio.h>

using namespace std;

template <class DATO>
DATO maximo(DATO x, DATO y, DATO z);

int main(){
	int x = 4, y = 7, z = 10;
	
	cout<<"El maximo valor es: "<<maximo(x,y,z);
	
	
	getch();
	return 0;
}

template <class DATO>
DATO maximo(DATO x, DATO y, DATO z){
	DATO max;
	
	if((x>y) && (x>z)){
		max = x;
	}
	else{
		if((y>x) && (y>z)){
			max = y;
		}
		else{
			max = z;
		}
	}
	return max;
}
