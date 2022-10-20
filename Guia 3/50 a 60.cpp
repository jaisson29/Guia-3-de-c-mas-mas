#include<iostream>
#include<string.h>
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

int main(){
	int opc;
	char color;
	titulo("MENU");
	cout<<"\t\t1. Supermercado con 15 ventas al mes\n";
	cout<<"\t\t2. Suma de 10 valores por while\n";
	cout<<"\t\t3. Edad promedio de n alumnos\n";
	cout<<"\t\t4. Altura de n personas\n";
	cout<<"\t\t5. Ahorro anula de una persona\n";
	cout<<"\t\t6. Serie de Fibonaccio por rango\n";
	cout<<"\t\t7. Horas semanales de trabajo y sueldo\n";
	cout<<"\t\t8. Carrera Aguascalientes-Zacatecas\n";
	cout<<"\t\t9. Tiki-Taka\n";
	cout<<"\t\t10.Nomina a 50 trabajadores\n";
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
	int precio[15],M550=0,M200=0,A550=0,A200=0;
	for(int i=0;i<15;i++){
		cout<<"\n\tDigite el precio total de la venta "<<i+1<<": ";
		cin>>precio[i];
		if(precio[i]>550){
			M550++;
			A550+=precio[i];
		}
		else if(precio[i]>200){
			M200++;
			A200+=precio[i];
		}
	}
	cout<<"\n\n\tNumero de ventas mayores que 550: "<<M550;
	cout<<"\n\tNumero de ventas mayores que 200 y menores o iguales a 550: "<<M200;
	cout.precision(5);
	cout<<"\n\tPromedio de ventas mayores que 550: "<<float(A550)/float(M550);
	cout<<"\n\tPromedio de ventas mayores que 200 y menores o iguales a 550: "<<float(A200)/float(M200);
	cout<<"\n\tVentas mayores que a 550: \n";
	for(int i=0;i<15;i++){
		if(precio[i]>550){
			cout<<"\t"<<precio[i]<<"\n";
		}
	}
	cout<<"\n\tVentas mayores que 200 y menores o iguales a 550: \n";
	for(int i=0;i<15;i++){
		if(precio[i]<=550 && precio[i]>200){
			cout<<"\t"<<precio[i]<<"\n";
		}
	}
}
void E2(){
	int C=0;
	float VA,SU=0;
	while(C<10){
		cout<<"\tDigite el dato N."<<C+1<<" : ";
		cin>>VA;
		C++;
		SU+=VA;
	}
	cout<<"\n\tLa suma total es: "<<SU;
}
void E3(){
	int C,ED,SU=0,NU;
	float PR;
	cout<<"\tDigite los numeros de alumnos a evaluar: ";
	cin>>NU;
	cout<<endl;
	for(C=0;C<NU;C++){
		cout<<"\tDigite la edad del almuno N."<<C+1<<": ";
		cin>>ED;
		SU+=ED;
	}
	PR=float(SU)/float(NU);
	cout<<"\n\tLA edad promedio de los "<<NU<<" estudiantes es: "<<PR;
}
void E4(){
	int C=0;
	float ES,SU=0,PR;
	cout<<"\n\tDigite 0(cero) para terminar la encuesta\n\n";
	do{
		C++;
		cout<<"\tDigite la altura de la persona N."<<C<<" encuestada: ";
		cin>>ES;
		SU+=ES;
	}while(ES!=0);
	PR= float(SU)/float(C-1);
	cout<<"\n\n\tLa altura promedio es: "<<PR;
}
void E5(){
	 int M;
	 float AH,CA=0;
	 for(int M=1;M<=12;M++){
		 cout<<"\n\tDigite el ahorro mensual del mes N."<<M<<": ";
		 cin>>AH;
		 CA+=AH;
	 }
	 cout<<"\n\tLa persona ahorra "<<CA<<" al a";
	 printf("%c",164);
	 cout<<"o";
}
void E6(){
	int N,A=0,B=1,C;
	cout<<"\n\tDigite cuantos elementos de la serie de Fibonnaci desea mostrar: ";
	cin>>N;
	cout<<"\n\tSerie de fibonacci:\n\t"<<A<<"\t"<<B;
	for(int i=0;i<N;i++){
		C=A+B;
		cout<<"\t"<<C;
		A=B;
		B=C;
	}
}
void E7(){
	int D, SH=0, HT;
	float PH,SU;
	cout<<"\n\tDigite el valor de pago por hora de trabajo: ";
	cin>>PH;
	for(int i=1;i<=6;i++){
		cout<<"\n\tDigite las horas que trabajo el dia N."<<i<<": ";
		cin>>HT;
		SH+=HT;
	}
	SU=PH*float(SH);
	cout<<"\n\tEl sueldo mensual del trabajador es: "<<SU;
}
void E8(){
	float R,KA,KB;
	cout<<"\n\tDigite en que kilometro se encuentra la primera persona: ";
	cin>>KA;
	cout<<"\n\tDigite en que kilometro se encuentra la segunda persona: ";
	cin>>KB;
	R=(KA+KB)/2;
	cout<<"\n\tLos corredores se encontraran en el kilometro "<<R<<" en el sentido Aguascalientes a Zacatecas";
	
}
void E9(){
	int N,CA=0,CB=0,CC=0,A=0,B=0,C=0,T=0,V;
	cout<<"\n\tDigite el numero de ventas realizadas durante el dia: ";
	cin>>N;
	for(int i=1;i<=N;i++){
		cout<<"\n\tDigite la venta N."<<i;
		cin>>V;
		T+=V;
		if(V>1000){
			CA++;
			A+=V;
		}
		else if(V>500){
			CB++;
			B+=V;
		}
		else{
			CC++;
			C+=V;
		}
	}
	cout<<"\n\tEl numero de ventas mayores a 1000 fueron: "<<CA;
	cout<<"\n\tEl total de ventas de esta categoria fueron: "<<A;
	cout<<"\n\n\tEl numero de ventas mayores a 500 y menores o iguales a 1000 fueron: "<<CB;
	cout<<"\n\tEl total de ventas de esta categoria fueron: "<<B;
	cout<<"\n\n\tEl numero de ventas menores o iguales a 500 fueron: "<<CC;
	cout<<"\n\tEl total de ventas de esta categoria fueron: "<<C;
	cout<<"\n\n\tEl total de ventas fueron: "<<T;
}
void E10(){
	int num;
	float h;
	cout<<"\n\tDigite el numero de empleados de calcular el valor de nomina: ";
	cin>>num;
	for(int i=1;i<=num;i++){
		cout<<"\n\tDigite las horas trabajadas por el obrero N."<<i<<": ";
		cin>>h;
		cout<<"\tEl total a pagar al empleado son "<<3000*h<<" Bolivares";
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
