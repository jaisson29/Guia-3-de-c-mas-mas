#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int a,b;
string tx;

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
	cout<<"\n\n\t1.Consultorio, cobro por consulta\n";
	cout<<"\t2.Paqueteria internacional\n";
	cout<<"\t3.Banco pueblo desconocido\n";
	cout<<"\t4.Supermercado SM\n";
	cout<<"\t5.Operaciones basicas por menu\n";
	cout<<"\t6.Primo, factorial, Tabla de multiplicar\n";
	cout<<"\t7.Numeros primos por rango\n";
	cout<<"\t8.N personas y determinar genero\n";
	cout<<"\t9.Suma de 5 numeros\n";
	cout<<"\t10.Pares por rango\n";
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
			cout<<"\n\tError, solo se permiten las opciones anteriormente dadas";
		break;
	}
	cout<<"\n\n";
	system("pause");
	main();
}

void E1(){
	int NC;
	float CC,TOT=0;
	cout<<"\tDigite el numero de consulta: ";
	cin>>NC;
	if(NC>0){
		if(NC>8){
			NC-=8;
			CC-=50;
			TOT+=50*NC;
			NC=8;
		}
		if(NC>5){
			NC-=5;
			CC-=50;
			TOT+=100*NC;
			NC=5;
		}
		if(NC>3){
			NC-=3;
			CC-=50;
			TOT+=150*NC;
			NC=3;
		}
		if(NC<=3){
			CC+=200;
			TOT+=200*NC;
		}
		cout<<"\n\tEl valor de la cita es: "<<CC<<"\n\tEl valor por el tratamiento va en: "<<TOT;
	}else{
		cout<<"\n\tError, valor no permitido\n\n";
	}
}
void E2(){
	int NZ,PE,CO;
	cout<<"\tZonas disponibles\n\t1.America del norte\n\t2.America central\n\t3.America del sur\n\t4.Europa\n\t5.Asia\n\tDigite alguna de las opciones anteriores: ";
	cin>>NZ;
	cout<<"\tDigite el peso del paquete en gramos: ";
	cin>>PE;
	if(PE>5000){
		cout<<"\tEl paquete no puede ser transportado por cuestiones de logistica y seguridad\n\n";
		return;
	}else{
		cout<<"\n\n\t";
		switch(NZ){
			case 1:
				CO=PE*11;
			break;
			case 2:
				CO=PE*10;
			break;
			case 3:
				CO=PE*12;
			break;
			case 4:
				CO=PE*24;
			break;
			case 5:
				CO=PE*27;
			break;
			default:
				cout<<"Opcion no valida\n\n";
				return;
			break;
		}
		cout<<"\tEl costo por la entrega del paquete es: "<<CO;
	}
}
void E3(){
	int TT;
	float LA,AC,NC;
	cout<<"\tDigite el numero de tarjetas que tiene en el banco 'Pueblo desconocido': ";
	cin>>TT;
	if(TT>1)
		cout<<"\tDigite el tipo de tarjeta con mayor cupo o a la que se le aplicara el aumento de limite de credito: ";
	else
		cout<<"\tDigite el tipo de tarjeta que tiene: ";
	cin>>TT;
	cout<<"\tDigite el limite de credito actual de la tarjeta: ";
	cin>>LA;
	switch(TT){
		case 1:
			AC=1.25;
		break;
		case 2:
			AC=1.35;
		break;
		case 3:
			AC=1.4;
		break;
		default:
			AC=1.5;
		break;
	}
	NC=AC*LA;
	cout<<"\n\tEl nuevo limite de credito en su tarjeta es: "<<NC;
}
void E4(){
	string genero;
	int compra,opc;
	cout<<"\n\tDigite su genero: \n\tHombre\n\tMujer\n\t";
	cin>>genero;
	cout<<"\n\tDigite el valor de su compra: ";
	cin>>compra;
	if(compra>25000){
		cout<<"\tDigite 1,2 o 3: ";
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"\n\tFelicidades, su proxima compra en el supermercado SM tendra un 20% de descuento";
			break;
			case 2:
				cout<<"\n\tFelicidades, su proxima compra en el supermercado SM tendra un 50% de descuento \n\t(No aplica para productos de primera necesidad, la compra no puede ser superior a su anterior compra)";
			break;
			default:
				cout<<"\n\tMas suerte para la proxima";
			break;
		}
	}else{
		cout<<"\n\n\tGracias por su compra, vuelva pronto\n\n\tRecuerda que por compras superiores a 25000 puedes concursar por excelentes premios";
	}
}
void E5(){
	int opc;
	float a,b;
	cout<<"\tDigite el primer numero: ";
	cin>>a;
	cout<<"\tDigite el segundo numero: ";
	cin>>b;
	cout<<"\n\tOperaciones basicas\n\n\t1.Suma\n\t2.Resta\n\t3.Multiplicacion";
	if(b!=0)
		cout<<"\n\t4.Division";
	cout<<"\n\tDigite una de las opciones dadas: ";
	cin>>opc;
	cout<<"\n\n\t";
	switch(opc){
		case 1:
			cout<<a<<" + "<<b<<" = "<< (a+b);
		break;
		case 2:
			cout<<a<<" - "<<b<<" = "<< (a-b);
		break;
		case 3:
			cout<<a<<" * "<<b<<" = "<< (a*b);
		break;
		case 4:
			if(b!=0)
				cout<<a<<" / "<<b<<" = "<< (a/b);
			else
				cout<<"Error, opcion no valida";
		break;
		default:
			cout<<"Error, opcion no valida";
		break;
	}
}
void E6(){
	int num,opc,cont=1;
	bool primo=true;
	cout<<"\tDigite un numero: ";
	cin>>num;
	cout<<"\n\t1.Factorial\n\t2.Comprobar si es primo\n\t3.Mostrar la tabla de multiplicar de 1 a 10\n\n\tDigite la accion a realizar: ";
	cin>>opc;
	cout<<"\n\n\t";
	switch(opc){
		case 1:
			for(int i=1;i<=num;i++){
				cont*=i;
				cout<<i;
				if(i<num)
					printf("%c",250);
			}
			cout<<" = "<<cont;
		break;
		case 2:
			for(int i=2;i<num;i++){
				if(num%i==0){
					primo=false;
				}
			}
			cout<<"\n\tEl numero "<<num;
			if(primo==true)
				cout<<" es primo";
			else
				cout<<" no es primo";
		break;
		case 3:
			for(int i=1;i<=10;i++){
				cout<<"\n\t"<<i;
				printf("%c",250);
				cout<<num<<" = "<<(i*num);
			}
		break;
		default:
		break;
	}
}
void E7(){
	int rang;
	bool primo;
	cout<<"\n\tDigite hasta que numero desea evaluar los numeros primos: ";
	cin>>rang;
	for(int i=1;i<=rang;i++){
		primo=true;
		for(int y=2;y<i;y++){
			if(i%y==0){
				primo=false;
			}
		}
		if(primo==true)
			cout<<"\n\t"<<i;
	}
}
void E8(){
	int validar=1,genero,contador,femenino=0,masculino=0;
	cout<<"\n\tGenero de la persona encuestada:\n\t1.Femenino\n\t2.Masculino\n\t0.Digite 0 para terminar la encuesta";
	do{
		cout<<"\n\tDigite una de las opciones anteriormente dadas: ";
		cin>>genero;
		contador++;
		if(genero==1)
			femenino++;
		else if(genero==2)
			masculino++;
		else if(genero==0)
			contador--;
		else{
			cout<<"\n\tError, valor no permitido";
			contador--;
		}
	}while(genero!=0);
	cout<<"\n\tEl procentaje de mujeres encuestadas es: "<<float(femenino*100)/float(contador);
	cout<<"\n\tEl procentaje de hombres encuestados es: "<<float(masculino*100)/float(contador);
}
void E9(){
}
void E10(){
}
