#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

string tx;
float a,b,c;
int d,e;

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
	cout<<"\n\n\t1.Operaciones basicas de dos numeros\n";
	cout<<"\t2.Determinar numero mayor\n";
	cout<<"\t3.Determinar si es mayor, menor o igual a 100\n";
	cout<<"\t4.Organizar de forma acendente 3 numeros\n";
	cout<<"\t5.Promediar 3 notas y determinar si aprobo o no\n";
	cout<<"\t6.Area de un triangualo\n";
	cout<<"\t7.Par o impar\n";
	cout<<"\t8.Descuento de rosas\n";
	cout<<"\t9.Porcentaje de ganancias por ventas\n";
	cout<<"\t10.Descuento de un carro de concesionario\n";
	cout<<"\t0. Salir\n\n";
	cout<<"\tDigite la opcion a realizar: ";
	cin>>d;
	switch(d){
		case 0:
			tx="SALIR";
			titulo();
			cout<<"\n\t\tGracias por elegirnos :)\n\n\n\t\tDesarrollado por: LUIS EDUARDO TEGUA SIERRA";
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
			system("pause");
		break;
	}
	main();
}
void E1(){
	cout<<"\tDigite el primer valor: ";
	cin>>a;
	cout<<"\tDigite el segundo valor: ";
	cin>>b;
	cout<<"\n\tOperaciones basicas :\n\n";
	cout<<"\t"<<a<<"+"<<b<<" = "<< (a+b)<<endl;
	cout<<"\t"<<a<<"-"<<b<<" = "<< (a-b)<<endl;
	cout<<"\t"<<a<<"*"<<b<<" = "<< (a*b)<<endl;
	if(b==0)
		cout<<"\t"<<"Division por 0 no definida\n";
	else
		cout<<"\t"<<a<<"/"<<b<<" = "<< (a/b)<<endl;
	system("pause");
}
void E2(){
	cout<<"\tDigite el primer valor : ";
	cin>>a;
	cout<<"\tDigite el segundo valor : ";
	cin>>b;
	if(a<b)
		cout<<"\t"<<b<<" es el numero mayor. ";
	if(a>b)
		cout<<"\t"<<a<<" es el numero mayor. ";
	if(a==b)
		cout<<"\tLos numeros son iguales";
		cout<<endl;
	system("pause");
}
void E3(){
	cout<<"Digite un numero: ";
	cin>>a;
	if(a<100)
		cout<<a<<" es menor a 100";
	if(a>100)
		cout<<a<<" es mayor a 100";
	if(a==100)
		cout<<"El numero es igual a 100";
		cout<<endl;
		system("pause");
}
void E4(){
	
	cout<<"\tDigite el primer valor : ";
	cin>>a;
	cout<<"\tDigite el segundo valor : ";
	cin>>b;
	cout<<"\tDigite el tercer valor : ";
	cin>>c;
	cout<<"\t";
	if(a<=b && a<=c){
		cout<<a<<"\t";
		if(b<=c)
			cout<<b<<"\t"<<c;
		else
			cout<<c<<"\t"<<b;
	}
	else if(b<=a && b<=c){
		cout<<b<<"\t";
		if(a<=c)
			cout<<a<<"\t"<<c;
		else
			cout<<c<<"\t"<<a;
	}
	else{
		cout<<c<<"\t";
		if(a<=b)
			cout<<a<<"\t"<<b;
		else
			cout<<b<<"\t"<<a;
	}
	cout<<"\n\n";
	system("pause");
}
void E5(){
	float p;
	cout<<"\tDigite la primera nota : ";
	cin>>a;
	cout<<"\tDigite la seguda nota : ";
	cin>>b;
	cout<<"\tDigite la tercera nota : ";
	cin>>c;
	p=(a+b+c)/3;
	cout.precision(3);
	cout<<"\n";
	if(a<0 ||b<0 ||c<0 ||a>5 ||b>5 ||c>5){
		cout<<"\tError, valores no permitidos";
	}
	else if(p < 3.5)
		cout<<"\tNo aprovo. Promedio: "<<p;
	else 
		cout<<"\tAprovo. Promedio: "<<p;
		cout<<endl<<endl;
		system("pause");
}
void E6(){
	cout<<"\tDigite el valor de la base del triangulo : ";
	cin>>a;
	cout<<"\tDigite el valor de la altura del triangulo : ";
	cin>>b;
	cout<<endl;
	if(a<0 || b<0)
		cout<<"\tError, los valores de medidas no pueden ser negativos.";
	else
		cout<<"\tEl area del triangulo es: "<<(a*b/2);
	cout<<endl;
	system("pause");
}
void E7(){
	cout<<"\tDigite un numero positivo: ";
	cin>>d;
	cout<<endl;
	if(d<0)
		cout<<"\tError, el numero ingresado no es positivo";
	else if(d==0){
		cout<<"\tEl numero es neutro";
	}
	else if(d%2==0)
		cout<<"\tEl numero es par";
	else
		cout<<"\tEl numero es impar";
	cout<<endl;
	system("pause");
}
void E8(){
	cout<<"\t1.Rojo\n\t2.Blanco\n\t3.Negro\n\t4.Otro\n\tIngrese una opcion de las rosas a vender: ";
	cin>>d;
	cout<<"\tDigite la cantidad de docenas a vender :";
	cin>>e;
	cout<<"\n\n\t";
	switch(d){
		case 1:
			cout<<"Valor docena: $4000\n\tValor descuento :"<<(400*e)<<"\n\tValor total: "<<(3600*e);
		break;
		case 2:
			cout<<"Valor docena: $5000\n\tValor descuento :"<<(400*e)<<"\n\tValor total: "<<(4600*e);
		break;
		case 3:
			cout<<"Valor docena: $18000\n\tValor descuento : 0\n\tValor total: "<<(18000*e);
		break;
		case 4:
			cout<<"Valor docena: $6000\n\tValor descuento :"<<(120*e)<<"\n\tValor total: "<<(5880*e);
		break;
		default:
			cout<<"Error, opcion no permitida";
		break;
	}
	cout<<"\n\n";
	system("pause");
}
void E9(){
	cout<<"\tDigite la cantidad de productos vendidos (minimo 0, maximo 100): ";
	cin>>d;
	cout<<"\tDigite el valor total de ventas: ";
	cin>>a;
	cout<<"\n\t";
	if(d<0 || d>100)
		cout<<"Error, cantidad de productos vendidos no permitido";
	else if(d<=20)
		cout<<"Porcentaje de ganacias: 5%\n\tGanancias: "<<(a*0.05);
	else if(d<=50)
		cout<<"Porcentaje de ganacias: 10%\n\tGanancias: "<<(a*0.1);
	else if(d<=80)
		cout<<"Porcentaje de ganacias: 15%\n\tGanancias: "<<(a*0.15);
	else if(d<=100)
		cout<<"Porcentaje de ganacias: 20%\n\tGanancias: "<<(a*0.2);
	cout<<endl;
	system("pause");
}
void E10(){
	string tx;
	cout<<"\tDigite la marca del carro: ";
	cin>>tx;
	cout<<"\tColor del carro\n\t1.Verde\n\t2.Rojo\n\t3.Otro\n\tDigite una opcion : ";
	cin>>a;
	cout<<"\tDigite el modelo del carro: ";
	cin>>b;
	cout<<"\tDigite el precio del carro: ";
	cin>>d;
	if(a<1 || a>3){
		cout<<"\n\tError, valor no permitido\n\n";
		system("pause");
		return;
	}
	cout<<"\n\n\tCarro marca: "<<tx;
	cout<<"\n\tPrecio: "<<d;
	if(a==1)
		cout<<"\n\t15% de Descueto: "<<(d*0.15)<<"\n\tPrecio total: "<<(d*0.85);
	else if(b<1990)
		cout<<"\n\t20% de Descueto: "<<(d*0.2)<<"\n\tPrecio total: "<<(d*0.8);	
	
	else if(a==2 && b>1995)
		cout<<"\n\t10% de Descueto: "<<(d*0.1)<<"\n\tPrecio total: "<<(d*0.9);
	else
		cout<<"\n\t0% de Descueto: "<<(0)<<"\n\tPrecio total: "<<(d);
		cout<<"\n\n";
		system("pause");	
}
