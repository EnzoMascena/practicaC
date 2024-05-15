#include <stdio.h>
int sum; /* Variable global, accesible desde cualquier parte */
 /* del programa*/
void suma(int x) /* Variable local declarada como parámetro, */
 /* accesible solo por la función suma*/
{
 sum=sum+x;
 return;
}
void intercambio(int *a,int *b)
{
 if (*a>*b)
 {
 int inter; /* Variable local, accesible solo dentro del */
 /* bloque donde se declara*/
 inter=*a;
 *a=*b;
 *b=inter;
 }
 return;
}
int main(void) /*Función principal del programa*/
{
 int contador,a=9,b=0; /*Variables locales, accesibles solo */
 /* por main*/
 sum=0;
 intercambio(&a,&b);
 for(contador=a;contador<=b;contador++) suma(contador);
 printf(“%d\n”,suma);
 return(0);
}    