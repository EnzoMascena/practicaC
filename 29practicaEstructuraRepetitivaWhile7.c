#include<stdio.h>
#include<math.h>
#include<conio.h>

int main (){
    int x, empleados, sueldo, sueldoBajo, sueldoAlto, sueldoTotal;

    x=1;
    sueldoBajo=0;
    sueldoAlto=0;
    sueldoTotal=0;


    printf("Cuantas empleados tiene la empresa:");
    scanf("%i", &empleados);

    while (x<=empleados)
    {
        printf("Cuanto es el sueldo del empleado %i ", x);
        printf("\n");
        scanf("%i", &sueldo);

        if (sueldo<100 || sueldo>500)
        {
            printf("Nadie cobra eso\n");
        }
        else
        {
            if (sueldo>=100 && sueldo<=300)
            {
                sueldoBajo=sueldoBajo+1;
            }
            else
            {
                if (sueldo>300)
                {
                    sueldoAlto=sueldoAlto+1;
                }
                
            }
        
        }
    sueldoTotal=sueldoBajo+sueldoAlto;
    x=x+1;
    }
    
    printf("Usted tiene %i empleados que cobran entre 100 y 300\n", sueldoBajo);
    printf("Usted tiene %i empleados que cobran mas de 300\n", sueldoAlto);
    printf("Usted tiene que pagar %i de sueldos\n", sueldoTotal);






return 0;
}