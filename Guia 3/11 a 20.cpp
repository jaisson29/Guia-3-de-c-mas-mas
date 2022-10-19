#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

string tx;
float a,b,c;
int d,e;
bool primo;

void primos();
void titulo();
void linea();
void E1();
void E2();
void E3();
void E4();
void E5();
void E6();
void E7();
void E8();
void E9();
void E10();

void titulo(){
	system("CLS");
	a=50;
	linea();
	cout<<"\n\n\t\tGuia de ejercicios N.3 - "<<tx;
	linea();
	cout<<"\n\n";
}
void linea(){
	cout<<"\n\n\t";
	for(b=0;b<a;b++)
		cout<<"*";
}
int main(){
	tx="MENU";
	titulo();
	int d;
	cout<<"\n\n\t1.Inicia en 200 y decrementa de 3 en 3 hasta 0\n";
	cout<<"\t2.Serie de Fibonacci\n";
	cout<<"\t3.Los 30 primeros numeros primos\n";
	cout<<"\t4.Numeros pares e impares con operaciones\n";
	cout<<"\t5.Menu de operaciones\n";
	cout<<"\t6.Divisible por 2 y 3 al mismo tiempo\n";
	cout<<"\t7.Primos por rango\n";
	cout<<"\t8.Reloj\n";
	cout<<"\t9.Tabla de multiplicar\n";
	cout<<"\t10.50 numeros pares y primos\n";
	cout<<"\t0. Salir\n\n";
	cout<<"\tDigite la opcion a realizar: ";
	cin>>d;
	switch(d){
		case 0:
			tx="SALIR";
			titulo();
			cout<<"\n\t\tGracias por elegirnos :)\n\n\n\tDesarrollado por: LUIS EDUARDO TEGUA SIERRA";
			return 0;
		break;
		case 1:
			tx="EJERCICIO 1";
			titulo();
			E1();
		break;
		case 2:
			tx="EJERCICIO 2";
			titulo();
			E2();
		break;
		case 3:
			tx="EJERCICIO 3";
			titulo();
			E3();
		break;
		case 4:
			tx="EJERCICIO 4";
			titulo();
			E4();
		break;
		case 5:
			tx="EJERCICIO 5";
			titulo();
			E5();
		break;
		case 6:
			tx="EJERCICIO 6";
			titulo();
			E6();
		break;
		case 7:
			tx="EJERCICIO 7";
			titulo();
			E7();
		break;
		case 8:
			tx="EJERCICIO 8";
			titulo();
			E8();
		break;
		case 9:
			tx="EJERCICIO 9";
			titulo();
			E9();
		break;
		case 10:
			tx="EJERCICIO 10";
			titulo();
			E10();
		break;
		default:
			cout<<"Error, solo se permiten las opciones anteriormente dadas";
		break;
	}
	main();
}
void E1(){
	for(a=200;a>=0;a-=3)
		cout<<"\t"<<a;
		cout<<"\t\n\n";
		system("pause");
}
void E2(){
	int num;
	cout<<"\tDigite un numero mayor o igual a 10: ";
	cin>>num;
	a=0;
	b=1;
	cout<<"\n\n\t"<<a<<"\t"<<b;
	for(int i=2;i<num;i++){
			c=a+b;
			cout<<"\t"<<c;
			a=b;
			b=c;
	}
	cout<<"\n\n";
	system("pause");
}
void E3(){
	a=0;
	d=1;
	while(a<30){
		primos();
		if(primo==true){
			cout<<"\t"<<d;
			a++;
		}
		d++;
	}
	cout<<"\n\n";
	system("pause");
}
void E4(){
	
}
void E5(){
}
void E6(){
}
void E7(){
}
void E8(){
}
void E9(){
}
void E10(){
}
void primos(){
	primo=true;
	for(e=2;e<d;e++){
		if(d%e==0){
			primo=false;
			return;
		}
	}
}
