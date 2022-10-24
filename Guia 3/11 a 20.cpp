#include<iostream>
#include<string.h>
#include<time.h>
#include<stdlib.h>

using namespace std;
int num,i;
bool prim;

void titulo(string txt);
void linea(int n);
void primo ();
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

int main(){
	int opc;
	titulo("MENU");
	cout<<"\n \t1. Decremento";
	cout<<"\n \t2. Serie de fibonacci";
	cout<<"\n \t3. Primos";
	cout<<"\n \t4. Pares e impares";
	cout<<"\n \t5. Operaciones";
	cout<<"\n \t6. Divisible por 2 y 3";
	cout<<"\n \t7. Primos en rango";
	cout<<"\n \t8. Reloj";
	cout<<"\n \t9. Tablas de multiplicar";
	cout<<"\n \t10. Evaluar si 50 numeros son pares o primos";
	cout<<"\n \t0. Salir";
	cout<<"\n\n\t ingrese la opcion a revisar: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			titulo("Ejercicio N.1");
			E1();
		break;
		case 2:
			titulo("Ejercicio N.2");
			E2();
		break;
		case 3:
			titulo("Ejercicio N.3");
			E3();
		break;
		case 4:
			titulo("Ejercicio N.4");
			E4();
		break;
		case 5:
			titulo("Ejercicio N.5");
			E5();
		break;
		case 6:
			titulo("Ejercicio N.6");
			E6();
		break;
		case 7:
			titulo("Ejercicio N.7");
			E7();
		break;
		case 8:
			titulo("Ejercicio N.8");
			E8();
		break;
		case 9:
			titulo("Ejercicio N.9");
			E9();
		break;
		case 10:
			titulo("Ejercicio N.10");
			E10();
		break;
		case 0:
			titulo("gracias por elegirnos");
			return 0;
			
		break;
		default:
			cout<<"\n\n\t\t solo ingrese los numeros de las opciones dadas\n\n\t";
		break;
	}
	system("PAUSE");
	main();
}

void titulo(string txt){
	system("CLS");
	linea (50);
	cout<<"\t\t guia de c++ N.1 -  "<<txt;
	linea(50);
}

void linea (int n){
	cout<<"\n\n\t";
	for (int i=0;i<n;i++)
		cout<<"*";
	cout<<"\t\n\n";
}

void primo(){
	prim=true;
	for(int c=2;c<num;c++){
		if(num%c==0)
			prim=false;
	}
}
void E1(){
	for(i=200;i>0;i-=3)
	cout<<"\t"<<i<<endl;
}
void E2(){
	int a=0,b=1,c;
	cout<<"\tDigite una valor mayor o igual 10 y menor o igual 100: ";
	cin>>num;
	if(num>=10 && num<=100){
		cout<<"\n\t"<<a<<"\n\t"<<b;
		for(i=2;i<num;i++){
			c=a+b;
			cout<<"\n\t"<<c;
			a=b;
			b=c;	
		}
	}else
		cout<<"\n\tError, valor ingresado no permitido\n\n";
		cout<<"\n\n";
}
void E3(){
	i=0;
	num=1;
	while(i<30){
		primo();
		if(prim==true){
			cout<<"\n\t"<<num;
			i++;
		}
		num++;
	}
	cout<<"\n\n";
}
void E4(){
	int ap=0,ai=0,cp=0,ci=0;
	cout<<"\tDigite una valor mayor que 10 y menor que 100: ";
	cin>>num;
	if(num>10 && num<100){
		cout<<"\n\tNumeros pares\n";
		for(i=1;i<=num;i++){
			if(i%2==0){
				cout<<"\n\t"<<i;
				ap+=i;
				cp++;
			}
		}
		cout<<"\n\tNumeros impares\n";
		for(i=1;i<=num;i++){
			if(i%2!=0){
				cout<<"\n\t"<<i;
				ai+=i;
				ci++;
			}
		}
		cout<<"\n\t"<<"Suma pares: "<<ap;
		cout<<"\n\t"<<"Suma impares: "<<ai;
		cout<<"\n\t"<<"Resta pares: "<<-ap;
		cout<<"\n\t"<<"Resta impares: "<<-ai;
		cout<<"\n\t"<<"Promedio pares: "<<ap/cp;
		cout<<"\n\t"<<"Promedio impares: "<<ai/ci;
		cout<<"\n\t"<<"Diferencia pares e impares: "<<ap-ai;
	}else 
		cout<<"\n\tError, valor no permitido";
		cout<<"\n\n";
}
void E5(){
	int a,b,c;
	cout<<"\n\t1. Suma de dos numeros";
	cout<<"\n\t2. Residuo de una division";
	cout<<"\n\t3. Division";
	cout<<"\n\t4. Suma de tres numeros";
	cout<<"\n\t5. Multiplicar tres numeros";
	cout<<"\n\n\tDigite una de las opciones anteriormente dadas: ";
	cin>>num;
	
	if(num>=1 && num<=5){
		cout<<"\n\tDigite el primer valor: ";
		cin>>a;
		cout<<"\n\tDigite el segundo valor: ";
		cin>>b;
		if(num>3){	
			cout<<"\n\tDigite el tercer valor: ";
			cin>>c;
		}
		cout<<"\n\t";
		switch(num){
			case 1:
				cout<<a<<" + "<<b<<" = "<< (a+b);
			break;
			case 2:
				cout<<a<<" % "<<b<<" = "<< (a%b);
			break;
			case 3:
				cout<<a<<" / "<<b<<" = "<< (a/b);
			break;
			case 4:
				cout<<a<<" + "<<b<<" + "<<c<<" = "<< (a+b+c);
			break;
			case 5:
				cout<<a<<" * "<<b<<" * "<<c<<" = "<< (a*b*c);
			break;
		}
	}else 
		cout<<"\n\tError, valor no permitido\n\n";
		cout<<"\n\n";
}
void E6(){
	cout<<"\n\tDigite un numero mayor que 3: ";
	cin>>num;
	if(num>3){
		if(num%2==0){
			cout<<"\n\tEl numero es divisible por 2";
			if(num%3==0)
				cout<<" y por 3";
			else
				cout<<" pero no por 3";
		}else{
			cout<<"\n\tEl numero no es divisible por 2 ";
			if(num%3==0)
				cout<<"pero si por 3";
			else
				cout<<"ni por 3";
		}
	}else
		cout<<"\n\tError, valor no valido";
		cout<<"\n\n";
}
void E7(){
	int num1;
	cout<<"\n\tDigite dos valores, el primero mayor al segundo, los numeros no pueden ser menores que 4\n\n\tDigite el primer valor: ";
	cin>>num1;
	cout<<"\tDigite el segundo valor: ";
	cin>>num;
	if(num1>num){
		if(num>=4){
			cout<<"\n\tLos numeros primos entre "<<num<<" y "<<num1<<" son: \n";
			for(num;num<=num1;num++){
				primo();
				if(prim==true){
					cout<<"\n\t"<<num;
				}
			}
			cout<<endl<<endl;
		}else cout<<"\n\tEl numero no es mayor que 4";
	}else cout<<"\n\tEl primer valor no es mayor que el segundo";
}
void E8(){
	for(i=0;i<=23;i++){
		for(int y=0; y<60;y++){
			for(int z=0;z<60;z++){
				cout<<"\n\t";
				if(i<10)
					cout<<"0";
				cout<<i<<":";
				if(y<10)
					cout<<"0";
				cout<<y<<":";
				if(z<10)
					cout<<"0";
				cout<<z;
				if(i==23)
					return;
			}
		}
	}
}
void E9(){
	cout<<"\n\tDigite un numero: ";
	cin>>num;
	for(i=1;i<=10;i++){
		cout<<"\n\t";
		if(i<10)
			cout<<"0";
		cout<<i<<" * "<<num<<" = "<<i*num;
	}
	cout<<"\n\n";
}

void E10(){
	int cprimos=0,cpares=0;
	int nprimos[50];
	int n;
	srand (time(NULL));
	i=0;
	while(i<50){
		num = rand ( ) % 100+4;
		cout<<num<<"\t";
		if(num%2==0){
			cpares++;
		}
		primo();
		if(prim==true){
			nprimos[cprimos]=num;
			cprimos++;
		}
		
		i++;
	}
	cout<<"\n\n\tDe los 50 valores\n\t"<<cpares<<" fueron pares";
	cout<<"\n\t"<<50-cpares<<" fueron impares";
	cout<<"\n\t"<<cprimos<<" fueron primos";
	cout<<"\n\t"<<50-cprimos<<" no fueron primos";
	
	cout<<"\n\n\tLos numeros primos fueron: ";
	for(i=0;i<cprimos;i++){
		cout<<"\n\t"<<nprimos[i];
	}
	cout<<endl<<endl;
}
/*void E10(){
	int cprimos=0,cpares=0,cont=1;
	int nprimos[49];
	cout<<"\n\tDigite 50 numeros mayores que 3";
	while(cont<=50){
		cout<<"\n\tDigite el valor N."<<cont<<": ";
		cin>>num;
		if(num>3){
			cont++;
			if(num%2==0){
				cpares++;
			}
			primo();
			if(prim==true){
				nprimos[cprimos]=num;
				cprimos++;
			}
		}else cout<<"\n\tError, valor no permitido";
	}
	cout<<"\n\tDe los 50 valores\n\t"<<cpares<<" fueron pares";
	cout<<"\n\t"<<50-cpares<<" fueron impares";
	cout<<"\n\t"<<cprimos<<" fueron primos";
	cout<<"\n\t"<<50-cprimos<<" no fueron primos";
	
	cout<<"\n\tLos numeros primos fueron: ";
	for(i=0;i<cprimos;i++){
		cout<<"\n\t"<<nprimos[i];
	}
	cout<<"\n\n";
}*/
