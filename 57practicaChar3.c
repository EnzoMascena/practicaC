#include<stdio.h>
#include<conio.h>

int main () {
    
    char abecedario[26];
    
    for (int i = 0; i < 26; i++)
    {
        abecedario[i] = 'a' +i;

    }
    
    printf("Abecedario: %s\n", abecedario);


return 0;
}