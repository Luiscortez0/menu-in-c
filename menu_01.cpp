//objetivo: que muestre un menú de opciones de operaciones aritméticas
//autor: luis carlos cortez guzman
//fecha: 6/3/22

//librerias
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
//cursor
void gotoxy(int x, int y){
	HANDLE a;
	a=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD b;
	b.X=x;
	b.Y=y;
	SetConsoleCursorPosition(a,b);
}
int main(){
	//declarar variables
	int y,salir,a,b,c;
	float m,n,o;
	char z;
	//inicializar variables
	y=4;
	salir=0;
	
	do{
		//limpiar pantalla
		system("cls");
		//menu
		gotoxy(10,2);
		printf("OPERACIONES ARITMETICAS");
		gotoxy(10,4);
		printf("Suma");
		gotoxy(10,6);
		printf("Resta");
		gotoxy(10,8);
		printf("Multiplicacion");
		gotoxy(10,10);
		printf("Division");
		gotoxy(10,12);
		printf("Residuo");
		gotoxy(10,14);
		printf("Raiz Cuadrada");
		gotoxy(10,16);
		printf("Salir");
		gotoxy(7,y);
		printf("-->");
		//obtener el valor de la tecla presionada
		z = getch();
		if(z==-32)
		   z = getch();
		//condicionar el valor de la tecla presionada
		switch(z){
			case 72: //flecha arriba
			    if(y==4)
			      y=16;
			    else
			      y=y-2;
			break;
			case 80: //flecha abajo
			    if(y==16)
			      y=4;
			    else
			      y=y+2;
			break;
			case 13: //enter
			    switch(y){ //cual es la opcion seleccionada
			    	case 4: //suma
			    	    gotoxy(35,4);
			    	    printf("Teclea un numero: ");
			    	    scanf("%d",&a);
			    	    gotoxy(35,6);
			    	    printf("Teclea otro numero: ");
			    	    scanf("%d",&b);
			    	    c=a+b;
			    	    gotoxy(35,8);
			    	    printf("suma = %d",c);
			    	    getch();
			    	break;
			    	case 6: //resta
			    	    gotoxy(35,4);
			    	    printf("Teclea un numero: ");
			    	    scanf("%d",&a);
			    	    gotoxy(35,6);
			    	    printf("Teclea otro numero: ");
			    	    scanf("%d",&b);
			    	    c=a-b;
			    	    gotoxy(35,8);
			    	    printf("resta = %d",c);
			    	    getch();
			    	break;
			    	case 8: //multiplicacion
			    	    gotoxy(35,4);
			    	    printf("Teclea un numero: ");
			    	    scanf("%d",&a);
			    	    gotoxy(35,6);
			    	    printf("Teclea otro numero: ");
			    	    scanf("%d",&b);
			    	    c=a*b;
			    	    gotoxy(35,8);
			    	    printf("multiplicacion = %d",c);
			    	    getch();
			    	break;
			    	case 10: //division
			    	    gotoxy(35,4);
			    	    printf("Teclea un numero: ");
			    	    scanf("%f",&m);
			    	    gotoxy(35,6);
			    	    printf("Teclea otro numero: ");
			    	    scanf("%f",&n);
			    	    o=m/n;
			    	    gotoxy(35,8);
			    	    printf("division = %f",o);
			    	    getch();
			    	break;
			    	case 12: //residuo
			    	    gotoxy(35,4);
			    	    printf("Teclea el dividendo: ");
			    	    scanf("%d",&a);
			    	    gotoxy(35,6);
			    	    printf("Teclea el divisor: ");
			    	    scanf("%d",&b);
			    	    c=a%b;
			    	    gotoxy(35,8);
			    	    printf("residuo = %d",c);
			    	    getch();
			    	break;
			    	case 14: //raiz cuadrada
			    	    gotoxy(35,4);
			    	    printf("Teclea un numero: ");
			    	    scanf("%f",&m);
			    	    o=sqrt(m);
			    	    gotoxy(35,6);
			    	    printf("raiz cuadrada = %f",o);
			    	    getch();
			    	break;
			    	case 16: //salir
			    	    salir=777;
			    	break;
				}
			break;
		}
	}while (salir==0);
}
