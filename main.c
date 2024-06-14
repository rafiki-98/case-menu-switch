#include <stdio.h>
#include <stdlib.h>

/* Definicion de funciones */
void carga(int *x,int *y)
{
printf("Ingrese el primer numero");
scanf("%d", x);
printf("Ingresar el segundo numero");
scanf("%d", y);
}
void multi(int x,int y)
{
printf("%d", x*y);
}
void sumar(int x, int y)
{
printf("%d", x+y);
}

int main(int argc, char *argv[]) {

 int opc,num1,num2;
 do
 {
 system("clear");
 printf("Menu\n");
 printf("\n1--Carga de Datos");
 printf("\n2--Multiplicar ");
 printf("\n3--Sumar ");
 printf("\n4--Salir");
 printf("\nIngrese la Opcion...");
 scanf("%d",&opc);
 switch(opc)
{
case 1: carga(&num1, &num2);
break;
case 2: multi(num1, num2);
break;
case 3: sumar(num1, num2);
break;
default: printf("Error en la opcion");
}
}
while (opc!=4);


	return 0;
}
