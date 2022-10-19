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
	cout<<"\n\n\t1.suma de dos numeros\n";
	cout<<"\t2.Promedio de calificaciones\n";
	cout<<"\t3.Area rectangulo\n";
	cout<<"\t4.Area de una circunferencia\n";
	cout<<"\t5.Area de un terreno a vender\n";
	cout<<"\t6.Area de figura con forma de cono de helado\n";
	cout<<"\t7.Leche en galones a litros\n";
	cout<<"\t8.Distancia entre dos puntos en plano cartesiano\n";
	cout<<"\t9.Medidas de la tela\n";
	cout<<"\t10.Pago por consumo de agua\n";
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
	int A,B,S;
	cout<<"\tDigite el primer numero: ";
	cin>>A;
	cout<<"\tDigite el segundo numero: ";
	cin>>B;
	S=A+B;
	cout<< "\n\tEl resultado de la suma entre el numero "<<A<<" y el numero "<<B<<" es: "<<S<<endl<<endl;
}
void E2(){
	float C1,C2,C3,C4,S,P;
	cout<<"\tDigite la nota del primer examen: ";
	cin>>C1;
	cout<<"\tDigite la nota del segundo examen: ";
	cin>>C2;
	cout<<"\tDigite la nota del tercer examen: ";
	cin>>C3;
	cout<<"\tDigite la nota del cuarto examen: ";
	cin>>C4;
	S=(C1+C2+C3+C4);
	P=S/4;
	cout<<"\n\tEl promedio de las calificaciones es: "<<P<<endl<<endl;
}
void E3(){
	float A,B,Area;
	cout<<"\tDigite el altura del rectangulo: ";
	cin>>A;
	cout<<"\tDigite la base del rectangulo: ";
	cin>>B;
	Area=B*A;
	cout<<"\n\tEl area del rectangulo es: "<<Area<<endl<<endl;
}
void E4(){
	float const PI=3.1416;
	float R,Area;	
	cout<<"\tDigite el radio del circulo: ";
	cin>>R;
	Area=PI*pow(R,2);
	cout<<"\n\tEl area de la circunferencia es:"<<Area<<endl<<endl;
}
void E5(){
	float A,B,C,AT,AR,Area;
	cout<<"\tDigite la altura mayor de la figura: ";
	cin>>A;
	cout<<"\tDigite la altura menor de la figura: ";
	cin>>C;
	cout<<"\tDigite la base de la figura: ";
	cin>>B;
	AT=((A-C)*B/2);
	AR=(B*C);
	Area=AR+AT;
	cout<<"\n\tEl area de la figura es: "<<Area<<endl<<endl; 
}
void E6(){
	float const PI=3.1416;
	float R,H,C,AT,AC,Area;
	cout<<"\tDigite el radio de la circunferencia: ";
	cin>>R;
	cout<<"\tDigite la hipotenusa de la figura: ";
	cin>>H;
	C=sqrt((pow(H,2))-(pow(R,2)));
	AT=R*C;
	AC=(PI*pow(R,2))/2;
	Area=AT+AC;
	cout<<"\n\tEl area de la figura es: "<<Area<<endl<<endl;
}
void E7(){
	int L;
	float PG,TG,GA;
	cout<<"\tDigite la cantida de litros que produce: ";
	cin>>L;
	cout<<"\tDigite el precio del galon: ";
	cin>>PG;
	TG=(1/3.785)*float(L);
	GA=TG*PG;
	cout<<"\n\tLa ganancia por la entrega de la leche: "<<GA<<endl<<endl;
}
void E8(){
	float X1,X2,Y1,Y2,X,Y,D;
	cout<<"\tDigite el valor en X de la primera coordenada: ";
	cin>>X1;
	cout<<"\tDigite el valor en Y de la primera coordenada: ";
	cin>>Y1;
	cout<<"\tDigite el valor en X de la segunda coordenada: ";
	cin>>X2;
	cout<<"\tDigite el valor en Y de la segunda coordenada: ";
	cin>>Y2;
	X=X2-X1;
	Y=Y2-Y1;
	D=sqrt(pow(X,2)+pow(Y,2));
	cout<<"\n\tLa distancia entre las dos coordenadas es "<<D<<endl<<endl;
	
}
void E9(){
	float CM,PG;
	cout<<"\tDigite los metros de tela que requiere: ";
	cin>>CM;
	PG=CM/0.0254;
	cout<<"\n\tDebe pedir "<<PG<<" pulgadas de tela\n\n";
}
void E10(){
	float A,L,N,CM,V,PAG;
	cout<<"\tDigite la altura de la alberca en metros: ";
	cin>>A;
	cout<<"\tDigite el largo de la alberca en metros: ";
	cin>>L;
	cout<<"\tDigite el ancho de la alberca en metros: ";
	cin>>N;
	cout<<"\tDigite el valor del agua por metro cubico: ";
	cin>>CM;
	V=A*L*N;
	cout<<"\n\tEl valor a pagar por el consumo de "<<V<<" metros cubicos de agua es: "<<V*CM<<endl<<endl;
}

