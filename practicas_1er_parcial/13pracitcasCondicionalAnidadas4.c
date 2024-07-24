 #include<stdio.h>
 #include<conio.h>

 int main () {

    int valor;

    printf("Ingrese un valor ");
    scanf("%i", &valor);

    if (valor<10)
    {
        printf("tiene un digito");
    }
    else 
    {
        if (valor<100)
        {
            printf("tiene 2 digitos");
        }
        else
        {
           if (valor<1000)
           {
                printf("Tiene 3 digitos");
           }
           else
            {
                printf("Error");
            }
        } 
    }
    
return 0;
}