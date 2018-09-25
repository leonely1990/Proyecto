#include<iostream>
#include<conio.h>

using namespace std;

void Menu1();
void Menu2();
void SubmenuCalculadora();
void SubmenuVectores(int vector[],int);
void tomardatoscalc(int);

int main(){
	int opcion;
	
	Menu1();
	cout<<"\nDigite una Opcion: ";
	cin>>opcion;
	system("cls");
	
	switch(opcion){
		case 1:
			SubmenuCalculadora();
	}
	
	
	getch();
	return 0;
}

void Menu1(){
	int opcion;
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t::                 MENU                    ::"<<endl;
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;	
	cout<<"\t\t::  1)Calculadora           2)Vectores     ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::  3)Matriz                4)Conversores  ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;	
}

void Menu2(){
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t::                 MENU                    ::"<<endl;
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
}

void SubmenuCalculadora(){
	int opcion;
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t::               CALCULADORA               ::"<<endl;
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::  1)Suma                     2)Resta     ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::  3)Multiplicacion           4)Division  ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t::  5)Regresar                 6)Salir     ::"<<endl;
	cout<<"\t\t::                                         ::"<<endl;
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	
	cout<<"\nSeleccione una Opcion: "; cin>>opcion;
	system("cls");
	if(opcion == 5){
		system("cls");
		main();
	}
	else if(opcion == 6){
		system("exit");
	}
	tomardatoscalc(opcion);

}

void tomardatoscalc(int a){
	float suma=0, resta=0, multiplicacion=0, division=0, b, c, op;
	switch(a){
		case 1:
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t::                 SUMA                    ::"<<endl;
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
			cout<<"\nDigite primer numero: "; cin>>b;
			cout<<"Digite segundo numero: "; cin>>c;
			suma = b+c;
			cout<<"\nEl resultado de la Suma es: "<<suma<<endl;
			cout<<"\n1)Regresar		2)Salir"<<endl; cin>>op;
			system("cls");
			if(op == 1){
				tomardatoscalc(1);
			}
			else if(op == 2){
				SubmenuCalculadora();
			}
			
		case 2:
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t::                RESTA                    ::"<<endl;
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
			cout<<"\nDigite primer numero: "; cin>>b;
			cout<<"Digite segundo numero: "; cin>>c;
			resta = b-c;
			cout<<"\nEl resultado de la resta es: "<<resta<<endl;
			cout<<"\n1)Regresar		2)Salir"<<endl; cin>>op;
			system("cls");
			if(op == 1){
				tomardatoscalc(2);
			}
			else if(op == 2){
				SubmenuCalculadora();
			}
			
		case 3:
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t::             MULTIPLICACION              ::"<<endl;
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
			cout<<"\nDigite primer numero: "; cin>>b;
			cout<<"Digite segundo numero: "; cin>>c;
			multiplicacion = b*c;
			cout<<"\nEl resultado de la multiplicacion es: "<<multiplicacion<<endl;
			cout<<"\n1)Regresar		2)Salir"<<endl; cin>>op;
			system("cls");
			if(op == 1){
				tomardatoscalc(3);
			}
			else if(op == 2){
				SubmenuCalculadora();
			}
			
		case 4:
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"\t\t::               DIVISION                  ::"<<endl;
	cout<<"\t\t:::::::::::::::::::::::::::::::::::::::::::::"<<endl;
			cout<<"\nDigite primer numero: "; cin>>b;
			cout<<"Digite segundo numero: "; cin>>c;
			division = b/c;
			cout<<"\nEl resultado de la division es: "<<division<<endl;
			cout<<"\n1)Regresar		2)Salir"<<endl; cin>>op;
			system("cls");
			if(op == 1){
				tomardatoscalc(4);
			}
			else if(op == 2){
				SubmenuCalculadora();
			}
	}
}


