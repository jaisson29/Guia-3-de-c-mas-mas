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
	cout<<"\n\n\t1.Determinar numero mayor\n";
	cout<<"\t2.Numero positivo o negativo\n";
	cout<<"\t3.Lapices al por mayor\n";
	cout<<"\t4.Promocion de El harapiento distinguido\n";
	cout<<"\t5.Determinar el numero mayor con pseudocodigo\n";
	cout<<"\t6.Tarifas de la langosta ahumada\n";
	cout<<"\t7.Asociacion de vinocultores\n";
	cout<<"\t8.Viaje de estudios\n";
	cout<<"\t9.Chimefon\n";
	cout<<"\t10.Viajes\n";
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
	system("pause");
	main();
}

void E1(){
	int A,B,M;
	cout<<"\tDigite el primer valor a comparar: ";
	cin>> A;
	cout<<"\tDigite el segundo valor a comparar: ";
	cin>> B;
	if(A<B)
		M=B;
	if(B<A)
		M=A;
	if(B==A){
		cout<<"\n\tLos numeros son iguales";
		return;
	}
		cout<<"\n\tEl numero mayor es "<<M<<endl<<endl;
}
void E2(){
	int NUM;
	string R;
	cout<<"\tDigite el numero a evaluar: ";
	cin>>NUM;
	if(NUM<0)
		R="negativo";
	else if (NUM>0)
		R="positivo";
	else
		R="neutro";
	cout<<"\n\tEl numero es "+R<<endl<<endl;
}
void E3(){
	int X;
	float PAG;
	cout<<"\tDigite la cantidad de lapices a comprar: ";
	cin>>X;
	if(X>=1000)
		PAG=85;
	else 
		PAG=90;
	//Preguntar como se ponian caracteres especiales
	cout<<"\n\tEl valor de "<<X<<" lapice(s) es "<<(PAG*X)<<"\n\n";
}
void E4(){
	float CT,DE,PF;
	cout<<"\tDigite el costo del traje: ";
	cin>>CT;
	if(CT>2500)
		DE=CT*0.15;
	else
		DE=CT*0.08;
		PF=CT-DE;
	cout<<"\n\n\tPrecio: "<<CT;
	cout<<"\n\tDescuento: "<<DE;
	cout<<"\n\tPrecio final: "<<PF<<endl<<endl;
}
void E5(){
	float A,B,C,M;
	cout<<"\tDigite el primer valor: ";
	cin>>A;
	cout<<"\tDigite el segundo valor: ";
	cin>>B;
	cout<<"\tDigite el tercer valor: ";
	cin>>C;
	if(A>=B && A>=C)
		M=A;
	else if(B>=A && B>=C)
		M=B;
	else
		M=C;
	cout<<"\n\tEl numero mayor es "<<M<<endl<<endl;
	cout<<"\tEl pseudocodigo de este programa es: ";
	cout<<"\n\tInicio";
	cout<<"\n\t\tReal A,B,C,M";
	cout<<"\n\t\tEscriba 'Digite el primer valor: '";
	cout<<"\n\t\tLeer A";
	cout<<"\n\t\tEscriba 'Digite el segundo valor: '";
	cout<<"\n\t\tLeer B";
	cout<<"\n\t\tEscriba 'Digite el tercer valor: '";
	cout<<"\n\t\tLeer C";
	cout<<"\n\t\tSi A>=B y A>=C entonces";
	cout<<"\n\t\t\tM<-A";
	cout<<"\n\t\tSino Si B>=A y B>=C entonces";
	cout<<"\n\t\t\tM<-B";
	cout<<"\n\t\tSino";
	cout<<"\n\t\t\tM<-C";
	cout<<"\n\t\tEscribir 'El numero mayor es ',M";
	cout<<"\n\tFin";
}
void E6(){
	int NP;
	float TOT;
	cout<<"\tDigite el numero de personas: ";
	cin>>NP;
	if(NP>300)
		TOT=NP*75;
	else if(NP>200)
		TOT=NP*85;
	else
		TOT=NP*95;
	cout<<"\n\tEl total a pagar por el banquete es "<<TOT<<endl<<endl;
	// falta pseudocodigo
}
void E7(){
	char TI;
	int TA,K;
	float P,GA;
	cout<<"\tDigite el tipo de uva(A o B): ";
	cin>>TI;
	cout<<"\tDigite el tamaño de la uva(1 o 2): ";
	cin>>TA;
	cout<<"\tDigite el precio de la uva: ";
	cin>>P;
	cout<<"\tDigite los kilos de produccion: ";
	cin>>K;
	if(TI=='A'){
		if(TA==1){		
			GA=(P+20)*K;
			cout<<"\tLa ganancia obtenida es "<<GA;
		}
		else if(TA==2){
			GA=(P+30)*K;
			cout<<"\tLa ganancia obtenida es "<<GA;
		}
		else
			cout<<"\n\tError, valor no permitido";	
	}
	else if(TI=='B'){
		if(TA==1){
			GA=(P-30)*K;
			cout<<"\tLa ganancia obtenida es "<<GA;
		}
		else if(TA==2){
			GA=(P-50)*K;
			cout<<"\tLa ganancia obtenida es "<<GA;
		}
		else
			cout<<"\n\tError, valor no permitido";	
	}else
		cout<<"\n\tError, valor no permitido";
		cout<<"\n\n";
		//falta pseudocodigo
}
void E8(){
	int NA;
	float PA,TOT;
	cout<<"\tDigite el numero de alumnos que realizaran el viaje: ";
	cin>>NA;
	if(NA>1){
		if(NA<30){
			PA=4000/float(NA);
			cout<<"\n\tEl pago por alumno es:"<<PA<<"\n\tEl total a pagar por el viaje es $4000\n\n";
			return;
		}else if(NA<50)
			PA=95;
		else if(NA<100)
			PA=70;
		else
			PA=65;
			TOT=PA*NA;
			cout<<"\n\tEl pago por alumno es: "<<PA;
			cout<<"\n\tEl total a pagar es "<<TOT;
	}else
		cout<<"\n\tError, valor no permitido";
		cout<<"\n\n";
}
void E9(){
	int TI;
	string DI,TU;
	float PAG=0,IMP,TOT;
	cout<<"\tDigite el tiempo que duro la llamada en minutos: ";
	cin>>TI;
	cout<<"\tDigite que dia es, todo en minuscula(Ejemplo: domingo):";
	cin>>DI;
	if(TI>=0){
		if(TI>10){
			TI-=10;
			PAG+=(TI)*50;
			TI=10;
		}
		if(TI>8){
			TI-=8;
			PAG+=(TI)*70;
			TI=8;
		}
		if(TI>5){
			TI-=5;
			PAG+=(TI)*80;
			TI=5;
		}
			PAG+=TI;
	}else{
		cout<<"\n\tError, valor no permitido\n\n";
		return;
	}
	if(DI=="domingo")
		IMP=0.03;
	else if(DI=="lunes" || DI=="martes" || DI=="miercoles" || DI=="jueves" || DI=="viernes" || DI=="sabado"){
		cout<<"\tDigite si esta en turno matutino o vespertino: ";
		cin>>TU;
		if(TU=="matutino")
			IMP=0.15;
		else if(TU=="vespertino")
			IMP=0.1;
		else{
			cout<<"\n\tEror, valor no permitido\n\n";
			return;
		}
	}else{
		cout<<"\n\tEror, valor no permitido\n\n";
		return;
	}
	TOT=PAG+(PAG*IMP);
	cout<<"\n\tPago por tiempo: "<<PAG;
	cout<<"\n\tPago por impuestos: "<<PAG*IMP;
	cout<<"\n\tEl total a pagar es: "<<TOT<<endl<<endl;
}
void E10(){
	string TI;
	int KM,NPR,NP;
	float CK,CP,TO;
	
	cout<<"\tDigite que tipo de bus es(A,B o C): ";
	cin>>TI;
	cout<<"\tDigite los kilometros que recorrera el bus: ";
	cin>>KM;
	cout<<"\tDigite el numero de personas que van en el bus: ";
	cin>>NPR;
	if(TI=="A")
		CK=2;
	else if(TI=="B")
		CK=2.5;
	else if(TI=="C")
		CK=3;
	else{
		cout<<"\n\tError, tipo de bus no permitido\n\n";
		return;
	}
	if(NPR>0){
		if(NPR<20){
			NP=20/NPR;
		}
		else{
			NP=1;
		}
	}else{
		cout<<"\n\tError, numero de personas no permitido\n\n";
		return;
	}
	CP=CK*KM*NP;
	TO=CP*NPR;
	cout<<"\n\n\tEl costo por persona es: "<<CP<<"\n\tEl costo total del viajes es: "<<TO<<"\n\n";
}
