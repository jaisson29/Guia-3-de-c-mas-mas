#include<iostream>
#include<string.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

void titulo(string txt);
void linea(int n);
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
void E11();

int main(){
	int opc;
	char color;
	titulo("MENU");
	cout<<"\t\t1. Codigo que simula una caja registradora\n";
	cout<<"\t\t2. Suma de diez numeros\n";
	cout<<"\t\t3. Mayores y menores que 0\n";
	cout<<"\t\t4. Suma de diez numeros con vector\n";
	cout<<"\t\t5. Numeros positivos y negativos\n";
	cout<<"\t\t6. Buscar un valor x en un vector de 100\n";
	cout<<"\t\t7. Invertir vector\n";
	cout<<"\t\t8. Promedio de n numeros enteros\n";
	cout<<"\t\t9. Imprimir las notas aprobadas\n";
	cout<<"\t\t10.Ordenar una matriz de manera ascendente\n";
	cout<<"\t\t11.Multiplicar dos matrices\n";
	cout<<"\t\t0. Salir\n";
	cout<<"\n\n\tIngrese la opcion a revisar: ";
	cin>>opc;
	switch (opc){
		case 0:
			titulo("SALIR");
			cout<<"\tMuchas gracias por usar mi software\n\n\tDesarrollado por: LUIS EDUARDO TEGUA SIERRA\n\t2557475-ADSO (Analisis y desarrollo de software)\n\n";
			return 0;
		break;
		case 1:
			titulo("Ejercicio 1");
			E1();
		break;
		case 2:
			titulo("Ejercicio 2");
			E2();
		break;
		case 3:
			titulo("Ejercicio 3");
			E3();
		break;
		case 4:
			titulo("Ejercicio 4");
			E4();
		break;
		case 5:
			titulo("Ejercicio 5");
			E5();
		break;
		case 6:
			titulo("Ejercicio 6");
			E6();
		break;
		case 7:
			titulo("Ejercicio 7");
			E7();
		break;
		case 8:
			titulo("Ejercicio 8");
			E8();
		break;
		case 9:
			titulo("Ejercicio 9");
			E9();
		break;
		case 10:
			titulo("Ejercicio 10");
			E10();
		break;
		case 11:
			titulo("Ejercicio 11");
			E11();
		break;
		default:
			titulo("ERROR");
			cout<<"\tDato no valido por el sistema)";
		break;
	}
	cout<<"\n\n";
	system("pause");
	main();
}

void E1(){
	int n,tot=0;
	do{
		system("CLS");
		titulo("Ejercicio 1");
		cout<<"\n\tTotal: "<<tot;
		cout<<"\n\tDigite 0(cero) para terminar la cuenta\n";
		cout<<"\n\tDigite el precio del producto vendido: ";
		cin>>n;
		if(n>0){
			tot+=n;
		}else if(n<0){
			cout<<"\n\tError, valor no permitido";
		}
	}while(n!=0);
	system("CLS");
	titulo("Ejercicio 1");
	cout<<"\n\tEl total a pagar es: "<<tot;
	
}
void E2(){
	int VA,SU;
	for(int i=1;i<=10;i++){
		cout<<"\n\tDigite el dato N."<<i<<": ";
		cin>>VA;
		SU+=VA;
	}
	cout<<"\n\tEl resultado de la suma es: "<<SU;
}
void E3(){
	int N,num,menores=0,mayores=0;
	cout<<"\n\tDigite la cantidad de numeros a evaluar: ";
	cin>>N;
	for(int i=1;i<=N;i++){
		cout<<"\n\tDigite el dato N."<<i<<": ";
		cin>>num;
		if(num<=0)
			menores++;
		else
			mayores++;
	}
	cout<<"\n\tLa cantidad de numeros menores o iguales a cero fueron: "<<menores;
	cout<<"\n\tLa cantidad de numeros mayores a cero fueron: "<<mayores;
}
void E4(){
	int VA[10],SU=0;
	for(int i=0;i<10;i++){
		cout<<"\n\tDigite el dato N."<<i+1<<": ";
		cin>>VA[i];
		SU+=VA[i];
	}
	cout<<"\n\tEl resultado de la suma es: "<<SU;
}
void E5(){
	int n,cpos=0,cneg=0,num,spos=0,sneg=0,mayor=0,menor=0;
	cout <<"\n\tDigite la cantidad de numeros a ingresar: ";
	cin>>n;
	int pos[n],neg[n];
	for(int i=1;i<=n;i++){
		cout<<"\n\tDigite el dato N."<<i<<": ";
		cin>>num;
		if(num>mayor)
			mayor=num;
		if(num<menor)
			menor=num;
		if(num<0){
			neg[cneg]=num;
			cneg++;
			sneg+=num;
		}
		else{
			pos[cpos]=num;
			cpos++;
			spos+=num;
		}
	}
	cout<<"\n\n\tNumeros negativos: ";
	for(int i=0;i<cneg;i++)
		cout<<"\n\t"<<neg[i];
	cout<<"\n\n\tNumeros positivos: ";
	for(int i=0;i<cpos;i++)
		cout<<"\n\t"<<pos[i];
	cout<<"\n\n\tLa suma de los numeros negativos es: "<<sneg;
	cout<<"\n\tLa suma de los numeros positivos es: "<<spos;
	cout<<"\n\tEl numero menor es: "<<menor;
	cout<<"\n\tEl numero mayor es: "<<mayor;
}
void E6(){
	srand(time(NULL));
	bool validar=false;
	int vector[100],num;
	for(int i=0;i<100;i++){
		vector[i]=1+rand()%50;
	}
	cout<<"\n\tDigite el numero a buscar de 50 a 1: ";
	cin>>num;
	if(num<1 || num>100)
		cout<<"\n\tError, valor no valido";
	else{
		for(int i=0;i<100;i++)
			cout<<"\n\t"<<i<<". "<<vector[i];
		for(int i=0;i<100;i++){
			if(vector[i]==num){
				if(validar==false){
					validar=true;
					cout<<"\n\n\tEl numero "<<num<<" se encuentra en el campo: ";
				}
				cout<<"\n\t"<<i;
			}
		}
		if(validar==false){
			cout<<"\n\tEl numero no se encuentra en el vector";
		}
	}
	}
void E7(){
	int vector[25];
	cout<<"\n\tVector original:\n\t";
	for(int i=0;i<25;i++){
		vector[i]=i;
		cout<<vector[i];
		if(i<24)
			cout<<", ";
	}
	
	cout<<"\n\n\tVector invertido:\n\t";
	for(int i=24;i>=0;i--){
		cout<<vector[i];
		if(i>1)
			cout<<", ";
	}
}
void E8(){
	int n,c=0,su=0;
	do{
		cout<<"\tDigite el numero a promediar: ";
		cin>>n;
		if(n>0){
			su+=n;
			c++;
		}
	}while(n>=0);
	cout<<"\n\tEl promedio es: "<<float(su)/float(c);
	
}
void E9(){
	float notas[5][5];
	for(int a=0;a<5;a++){
		for(int b=0;b<5;b++){
			cout<<"Digite una nota: ";
			cin>>notas[a][b];
			if(notas[a][b]<0 || notas[a][b]>5){
				cout<<"\n\tError, valor no permitido";
				b--;
			}
		}
	}
	cout<<"\n\n\tNotas aprovadas: \n\t";
	for(int a=0;a<5;a++){
		for(int b=0;b<5;b++){
			if(notas[a][b]>3.5){
				cout<<notas[a][b];
				if(a!=4 || b!=4)
					cout<<", ";
			}
		}
	}
}
void E10(){
	int matriz[5][5],promedio=0,aux;
	cout<<"\n\tDigite un numeros enteros menores que 100\n";
	for(int a=0;a<5;a++){
		for(int b=0;b<5;b++){
			cout<<"\n\t["<<a<<"]["<<b<<"]: ";
			cin>>matriz[a][b];
			if(matriz[a][b]>=100){
				cout<<"\tError, valor no permitido";
				b--;
			}
		}
	}
	
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){		
			for(int a=0;a<5;a++){		
				for(int b=0;b<5;b++){
					if(matriz[x][y]<matriz[a][b]){
						aux=matriz[x][y];
						matriz[x][y]=matriz[a][b];
						matriz[a][b]=aux;
					}
				}
			}
		}	
	}
	cout<<"\n\tMatriz ordenada: \n\n\t";
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			promedio+=matriz[x][y];
			cout<<matriz[x][y];
			if(x!=4 || y!=4)
				cout<<", ";
		}
	}
	
	cout<<"\n\tEl numero menor ingresado es: "<<matriz[0][0];
	cout<<"\n\tEl numero mayor ingresado es: "<<matriz[4][4];
	cout.precision(3);
	cout<<"\n\tEl promedio de los datos es: "<<float(promedio)/float(25);
}
void E11(){
	int suma=0;
	int A[3][3],B[3][3],C[3][3]={0};
	cout<<"\n\tDigite datos positivos menores que 10\n";
	cout<<"\n\n\t\tMatriz 1\n";
	for(int x=0;x<3;x++){
		for(int y=0;y<3;y++){
			cout<<"["<<x<<"]["<<y<<"]: ";
			cin>>A[x][y];
			if(A[x][y]<0 || A[x][y]>=10){
				cout<<"\n\tError, dato no valido";
				y--;
			}
		}
	}
	cout<<"\n\n\t\tMatriz 2\n";
	for(int x=0;x<3;x++){
		for(int y=0;y<3;y++){
			cout<<"["<<x<<"]["<<y<<"]: ";
			cin>>B[x][y];
			if(B[x][y]<0 || B[x][y]>=10){
				cout<<"\n\tError, dato no valido";
				y--;
			}
		}
	}
	for(int x=0;x<3;x++){
		for(int y=0;y<3;y++){
			for(int a=0;a<3;a++)
				C[x][y]+=A[x][a]*B[a][y];
		}
	}
	cout<<"\n\n\tMultiplicacion de matriz 1 y 2\n";
	for(int x=0;x<3;x++){
		cout<<"\n\t";
		for(int y=0;y<3;y++)
			cout<<C[x][y]<<"\t";
	}
	cout<<"\n";
	for(int a=0;a<3;a++){
		suma=0;
		for(int b=0;b<3;b++)
			suma+=C[a][b];
		cout<<"\n\tSuma fila N."<<a+1<<": "<<suma;
	}
	cout<<"\n";
	for(int a=0;a<3;a++){
		suma=0;
		for(int b=0;b<3;b++)
			suma+=C[b][a];
		cout<<"\n\tSuma columna N."<<a+1<<": "<<suma;
	}
}

void titulo(string txt){
	system("CLS");
	linea(50);
	cout<<"\n\t\tEjercicios guia N.1 C++ _ "+txt+"\n";
	linea(50);
}

void linea(int n){
	cout<<"\t";
	for(int i=0;i<n;i++)
		cout<<"_";
	cout<<"\n\n";
}
