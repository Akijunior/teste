#include <stdio.h>
#include <string.h>

int main(void)

{
    char curso[20] = "C Progressivo";
    char letra[1] = "C";
    int count, contador = 0;
 
    for(count = 0 ; count < 20 ; count++)
        if (strcmp(letra, curso[count]) == 0){
            contador = 1;
        }
    
    printf("\nA quantidade de caracteres foi %d.\n", contador);
    return 0;

}
