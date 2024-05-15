 #include<stdio.h>
 #include<conio.h>

 int main () {

    int nota1, nota2, nota3, promedio ;

    printf("ingrese la primera nota: ");
    scanf("%i", &nota1);

    printf("ingrese la segunda nota: ");
    scanf("%i", &nota2);

    printf("ingrese la tercera nota: ");
    scanf("%i", &nota3);

    promedio=(nota1+nota2+nota3)/3;
    if (promedio>7)
    {
        printf("Promocionaste con un %i", promedio );
    }
    else
    {
        if(promedio>=4)
        {
            printf("Regular con un %i", promedio);
        }
        else
        {
            printf("Desaprobaste con un %i", promedio);
        }
    }
 return 0;    

 }